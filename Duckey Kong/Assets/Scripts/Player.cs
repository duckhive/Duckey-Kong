using System;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] private float moveSpeed = 5f;
    [SerializeField] private float climbSpeed = 3f;
    [SerializeField] private float jumpStrength = 12f;
    [SerializeField] private bool grounded;
    [SerializeField] private bool canClimb;
    [SerializeField] private float distToGround = 0.3f;

    private Animator _anim;
    private Rigidbody _rb;
    private Vector3 _direction;


    private void Awake()
    {
        _anim = GetComponent<Animator>();
        _rb = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        _direction.x = -Input.GetAxis("Horizontal") * moveSpeed;
        if (Input.GetAxis("Horizontal") != 0)
            _anim.SetBool("Running", true);
        else
            _anim.SetBool("Running", false);
        
        CheckCollision();
        Jump();
        Climbing();
        ChangeLayerOnLadder();
        Rotation();
    }

    private void FixedUpdate()
    {
        _rb.MovePosition(_rb.position + _direction * Time.fixedDeltaTime);
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Obstacle"))
        {
            enabled = false;
            GameManager.Instance.LevelFailed();
        }
        else if (other.gameObject.layer == LayerMask.NameToLayer("Objective"))
        {
            enabled = false;
            GameManager.Instance.LevelComplete();
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Ladder"))
            canClimb = true;
    }
    
    private void OnTriggerExit(Collider other)
    {
        if (canClimb && other.gameObject.layer == LayerMask.NameToLayer("Ladder"))
            canClimb = false;
    }

    private void CheckCollision()
    {
        grounded = Physics.Raycast(transform.position + new Vector3(0, 0.1f, 0), -Vector3.up, distToGround);
    }
    
    private void ChangeLayerOnLadder()
    {
        if (canClimb && !grounded)
            gameObject.layer = LayerMask.NameToLayer("Ignore Collisions");
        else
            gameObject.layer = LayerMask.NameToLayer("Player");
    }

    private void Climbing()
    {
        if (canClimb && Input.GetAxis("Vertical") != 0)
        {
            _direction.y = Input.GetAxis("Vertical") * climbSpeed;
            _anim.SetBool("Running", true);
        }
        else if (canClimb && Input.GetAxis("Vertical") == 0)
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
            _direction = Vector3.up * jumpStrength;
        else
            _direction += Physics.gravity * Time.deltaTime;
        
        if(grounded && !canClimb)
            _direction.y = Mathf.Max(_direction.y, -1f);
    }
}