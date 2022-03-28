using System;
using System.Collections;
using MoreMountains.Tools;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    public static PlayerManager Instance;
    
    [SerializeField] private float moveSpeed = 5f;
    [SerializeField] private float climbSpeed = 3f;
    [SerializeField] private float jumpStrength = 12f;
    [SerializeField] private bool grounded;
    [SerializeField] private bool canClimb;
    [SerializeField] private bool climbing;
    [SerializeField] private float distToGround = 0.3f;

    [HideInInspector] public Renderer renderer;
    [HideInInspector] public Rigidbody rb;
    
    private Animator _anim;
    private Vector3 _direction;


    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else 
            Destroy(gameObject);

        renderer = GetComponentInChildren<Renderer>();
        rb = GetComponent<Rigidbody>();
        
        _anim = GetComponent<Animator>();
        
        DontDestroyOnLoad(gameObject);
    }

    private void Update()
    {
        if (GameManager.Instance.gameActive)
        {
            _direction.x = -Input.GetAxis("Horizontal") * moveSpeed;
            if (Input.GetAxis("Horizontal") != 0)
                _anim.SetBool("Running", true);
            else
                _anim.SetBool("Running", false);
        
            GroundCheck();
            Jump();
            Climbing();
            ChangeLayerOnLadder();
            Rotation();
        }
        else
        {
            _anim.SetBool("Running", false);
        }
    }

    private void FixedUpdate()
    {
        if(GameManager.Instance.gameActive && !GameManager.Instance.paused)
            rb.MovePosition(rb.position + _direction * Time.fixedDeltaTime);
    }

    private void OnCollisionEnter(Collision other)
    {
        if ((other.gameObject.layer == LayerMask.NameToLayer("Obstacle") || other.gameObject.layer == LayerMask.NameToLayer("Enemy")) && GameManager.Instance.gameActive)
        {
            FeedbacksManager.Instance.hitObstacleFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelFailed();
            DisablePlayer();
        }
        else if (other.gameObject.TryGetComponent<ObjectiveManager>(out ObjectiveManager objective))
        {
            FeedbacksManager.Instance.reachObjectiveFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelComplete();
            objective.ObjectiveReached();
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Ladder"))
        {
            canClimb = true;
        }
        else
        {
            canClimb = false;
            climbing = false;
        }
    }
    
    private void OnTriggerExit(Collider other)
    {
        if (canClimb && other.gameObject.layer == LayerMask.NameToLayer("Ladder"))
        {
            canClimb = false;
            climbing = false;
        }
    }

    private void GroundCheck()
    {
        grounded = Physics.Raycast(transform.position + new Vector3(0, 0.1f, 0), -Vector3.up, distToGround);
    }
    
    private void ChangeLayerOnLadder()
    {
        if (climbing && !grounded && Input.GetAxis("Vertical") > 0)
            gameObject.layer = LayerMask.NameToLayer("Ignore Collisions");
        //else if (canClimb && !climbing && Input.GetAxis("Vertical") < 0)
        //    gameObject.layer = LayerMask.NameToLayer("Ignore Collisions");
        else
            gameObject.layer = LayerMask.NameToLayer("Player");
        
        /*if(canClimb && !climbing && Input.GetAxis("Vertical") < 0)
            StartCoroutine(DisableCollisionsFor(5));*/
    }

    private IEnumerator DisableCollisionsFor(float time)
    {
        gameObject.layer = LayerMask.NameToLayer("Ignore Collisions");
        yield return new WaitForSeconds(time);
        gameObject.layer = LayerMask.NameToLayer("Player");
    }

    private void Climbing()
    {
        if (canClimb && Input.GetAxis("Vertical") > 0)
            climbing = true;
        
        if (climbing && Input.GetAxis("Vertical") != 0)
        {
            _direction.y = Input.GetAxis("Vertical") * climbSpeed;
            _anim.SetBool("Running", true);
        }
        else if (climbing && Input.GetAxis("Vertical") == 0)
        {
            _direction.y = 0;
            _anim.SetBool("Running", false);
        }
        
    }

    private void Rotation()
    {
        if (_direction.x > 0f)
            transform.eulerAngles = new Vector3(0, 90, 0);
        else if (_direction.x < 0f)
            transform.eulerAngles = new Vector3(0, -90, 0);
    }

    private void Jump()
    {
        if (Input.GetButtonDown("Jump") && grounded)
        {
            _direction = Vector3.up * jumpStrength;
            FeedbacksManager.Instance.jumpFeedbacks.PlayFeedbacks();
        }
        else if (grounded)
        {
            _direction.y = Mathf.Max(_direction.y, -1f);
        }
        else
        {
            _direction += Physics.gravity * Time.deltaTime;
        }
    }

    public void EnablePlayer()
    {
        enabled = true;
        renderer.enabled = true;
        transform.position = FindObjectOfType<PlayerStartingPosition>().transform.position;
        rb.velocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;
    }
    
    public void DisablePlayer()
    {
        renderer.enabled = false;
        enabled = false;
    }

    public void Footstep()
    {
        if(grounded)
            FeedbacksManager.Instance.footstepFeedbacks.PlayFeedbacks();
    }
}