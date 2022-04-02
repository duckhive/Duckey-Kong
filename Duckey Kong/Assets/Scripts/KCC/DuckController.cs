using System;
using System.Collections;
using System.Collections.Generic;
using KinematicCharacterController;
using UnityEngine;

public struct DuckPlayerInputs
{
    public float MoveAxisUp;
    public float MoveAxisRight;
    public bool JumpDown;

}

public class DuckController : MonoBehaviour, ICharacterController
{
    public KinematicCharacterMotor Motor;
    
    [Header("Stable Movement")]
    public float MaxStableMoveSpeed = 10f;
    public float StableMovementSharpness = 15;
    
    [Header("Air Movement")]
    public float MaxAirMoveSpeed = 10f;
    public float AirAccelerationSpeed = 5f;
    public float Drag = 0.1f;
    
    [Header("Jumping")]
    public bool AllowJumpingWhenSliding = false;
    public float JumpSpeed = 10f;
    public float JumpPreGroundingGraceTime = 0f;
    public float JumpPostGroundingGraceTime = 0f;
    
    [Header("Misc")]
    public Vector3 Gravity = new Vector3(0, -30f, 0);
    public float ClimbSpeed = 3f;
    public Collider IgnoredCollider;

    private Vector3 _moveInputVector;
    private bool _jumpRequested = false;
    private bool _jumpConsumed = false;
    private bool _jumpedThisFrame = false;
    private float _timeSinceJumpRequested = Mathf.Infinity;
    private float _timeSinceLastAbleToJump = 0f;
    private Vector3 _internalVelocityAdd = Vector3.zero;
    private Vector3 _internalVelocitySet = Vector3.zero;

    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        Motor.CharacterController = this;
    }

    public void FindGroundColliderAndAddToIgnoreList()
    {
        IgnoredCollider = FindObjectOfType<Ground>().GetComponent<Collider>();
    }

    public void UpdateRotation(ref Quaternion currentRotation, float deltaTime)
    {
        if (GameManager.Instance.gameActive)
        {
            if (_moveInputVector != Vector3.zero && StableMovementSharpness > 0f)
            {
                // Smoothly interpolate from current to target look direction
                Vector3 smoothedLookInputDirection = Vector3.Slerp(Motor.CharacterForward, _moveInputVector,
                    1 - Mathf.Exp(-StableMovementSharpness * deltaTime)).normalized;

                // Set the current rotation (which will be used by the KinematicCharacterMotor)
                currentRotation = Quaternion.LookRotation(smoothedLookInputDirection, Motor.CharacterUp);
            }
        }
}

    public void UpdateVelocity(ref Vector3 currentVelocity, float deltaTime)
    {
        Vector3 targetMovementVelocity = Vector3.zero;

        if (GameManager.Instance.gameActive)
        {
            if (PlayerManager.Instance.climbingUp)
            {
                Motor.ForceUnground();
                currentVelocity = Vector3.up * ClimbSpeed;
            }

            if (PlayerManager.Instance.climbingDown)
            {
                Motor.ForceUnground();
                currentVelocity = Vector3.down * ClimbSpeed;
            }

            if (PlayerManager.Instance.stayOnLadder)
            {
                currentVelocity = Vector3.zero;
            }

            if (Motor.GroundingStatus.IsStableOnGround)
            {
                // Reorient source velocity on current ground slope (this is because we don't want our smoothing to cause any velocity losses in slope changes)
                currentVelocity =
                    Motor.GetDirectionTangentToSurface(currentVelocity, Motor.GroundingStatus.GroundNormal) *
                    currentVelocity.magnitude;

                // Calculate target velocity
                Vector3 inputHorizontal = Vector3.Cross(_moveInputVector, Motor.CharacterUp);
                Vector3 reorientedInput =
                    Vector3.Cross(Motor.GroundingStatus.GroundNormal, inputHorizontal).normalized *
                    _moveInputVector.magnitude;
                targetMovementVelocity = reorientedInput * MaxStableMoveSpeed;

                // Smooth movement Velocity
                currentVelocity = Vector3.Lerp(currentVelocity, targetMovementVelocity,
                    1 - Mathf.Exp(-StableMovementSharpness * deltaTime));

            }
            else
            {
                // Add move input
                if (_moveInputVector.sqrMagnitude > 0f)
                {
                    targetMovementVelocity = _moveInputVector * MaxAirMoveSpeed;

                    // Prevent climbing on un-stable slopes with air movement
                    if (Motor.GroundingStatus.FoundAnyGround)
                    {
                        Vector3 perpenticularObstructionNormal = Vector3
                            .Cross(Vector3.Cross(Motor.CharacterUp, Motor.GroundingStatus.GroundNormal),
                                Motor.CharacterUp).normalized;
                        targetMovementVelocity =
                            Vector3.ProjectOnPlane(targetMovementVelocity, perpenticularObstructionNormal);
                    }

                    Vector3 velocityDiff = Vector3.ProjectOnPlane(targetMovementVelocity - currentVelocity, Gravity);
                    currentVelocity += velocityDiff * AirAccelerationSpeed * deltaTime;
                }

                // Gravity
                currentVelocity += Gravity * deltaTime;

                // Drag
                currentVelocity *= (1f / (1f + (Drag * deltaTime)));
            }

            // Handle jumping
            _jumpedThisFrame = false;
            _timeSinceJumpRequested += deltaTime;
            if (_jumpRequested)
            {
                // See if we actually are allowed to jump
                if (!_jumpConsumed &&
                    ((AllowJumpingWhenSliding
                         ? Motor.GroundingStatus.FoundAnyGround
                         : Motor.GroundingStatus.IsStableOnGround) ||
                     _timeSinceLastAbleToJump <= JumpPostGroundingGraceTime))
                {
                    // Calculate jump direction before ungrounding
                    Vector3 jumpDirection = Motor.CharacterUp;
                    if (Motor.GroundingStatus.FoundAnyGround && !Motor.GroundingStatus.IsStableOnGround)
                    {
                        jumpDirection = Motor.GroundingStatus.GroundNormal;
                    }

                    // Makes the character skip ground probing/snapping on its next update. 
                    // If this line weren't here, the character would remain snapped to the ground when trying to jump. Try commenting this line out and see.
                    Motor.ForceUnground(0.1f);

                    // Add to the return velocity and reset jump state
                    FeedbacksManager.Instance.jumpFeedbacks.PlayFeedbacks();
                    currentVelocity += (jumpDirection * JumpSpeed) -
                                       Vector3.Project(currentVelocity, Motor.CharacterUp);
                    _jumpRequested = false;
                    _jumpConsumed = true;
                    _jumpedThisFrame = true;
                }
            }
            
            
            // Take into account additive velocity
            if (_internalVelocityAdd.sqrMagnitude > 0f)
            {
                currentVelocity += _internalVelocityAdd;
                _internalVelocityAdd = Vector3.zero;
            }

            if (_internalVelocitySet.sqrMagnitude > 0f)
            {
                currentVelocity = _internalVelocitySet;
                _internalVelocitySet = Vector3.zero;
            }
        }
        else
        {
            currentVelocity = Vector3.zero;
        }
        
        PlayerManager.Instance.anim.SetFloat("Velocity", Mathf.Abs(currentVelocity.x));
        
    }

    public void BeforeCharacterUpdate(float deltaTime)
    {
    }

    public void PostGroundingUpdate(float deltaTime)
    {
    }

    public void AfterCharacterUpdate(float deltaTime)
    {
        // Handle jump-related values
        {
            // Handle jumping pre-ground grace period
            if (_jumpRequested && _timeSinceJumpRequested > JumpPreGroundingGraceTime)
            {
                _jumpRequested = false;
            }

            // Handle jumping while sliding
            if (AllowJumpingWhenSliding ? Motor.GroundingStatus.FoundAnyGround : Motor.GroundingStatus.IsStableOnGround)
            {
                // If we're on a ground surface, reset jumping values
                if (!_jumpedThisFrame)
                {
                    _jumpConsumed = false;
                }
                _timeSinceLastAbleToJump = 0f;
            }
            else
            {
                // Keep track of time since we were last able to jump (for grace period)
                _timeSinceLastAbleToJump += deltaTime;
            }
        }
    }

    public bool IsColliderValidForCollisions(Collider coll)
    {
        if (PlayerManager.Instance.climbingUp && IgnoredCollider == coll)
        {
            return false;
        }
        return true;
    }

    public void OnGroundHit(Collider hitCollider, Vector3 hitNormal, Vector3 hitPoint, ref HitStabilityReport hitStabilityReport)
    {
    }

    public void OnMovementHit(Collider hitCollider, Vector3 hitNormal, Vector3 hitPoint,
        ref HitStabilityReport hitStabilityReport)
    {
    }

    public void ProcessHitStabilityReport(Collider hitCollider, Vector3 hitNormal, Vector3 hitPoint, Vector3 atCharacterPosition,
        Quaternion atCharacterRotation, ref HitStabilityReport hitStabilityReport)
    {
    }

    public void OnDiscreteCollisionDetected(Collider hitCollider)
    {
    }
    
    public void SetInputs(ref DuckPlayerInputs inputs)
    {
        // Clamp input
        _moveInputVector = Vector3.ClampMagnitude(new Vector3(-inputs.MoveAxisRight, 0f, 0f), 1f);
        
        // Jumping input
        if (inputs.JumpDown)
        {
            _timeSinceJumpRequested = 0f;
            _jumpRequested = true;
        }
    }
    
    public void AddVelocity(Vector3 velocity)
    {
        _internalVelocityAdd += velocity;
    }

    public void SetVelocity(Vector3 velocity)
    {
        _internalVelocitySet = velocity;
    }
    
    public void Footstep()
    {
        if(Motor.GroundingStatus.IsStableOnGround)
            FeedbacksManager.Instance.footstepFeedbacks.PlayFeedbacks();
    }
}
