using System.Collections;
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
    [SerializeField] public Renderer playerRenderer;
    [SerializeField] public Renderer crownRenderer;

    [HideInInspector] public bool alive;
    [HideInInspector] public Rigidbody rb;
    [HideInInspector] public Collider collider;
    
    private Animator _anim;
    private Vector3 _direction;


    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else 
            Destroy(gameObject);

        rb = GetComponent<Rigidbody>();
        collider = GetComponent<Collider>();
        
        _anim = GetComponent<Animator>();
        
        DontDestroyOnLoad(gameObject);
    }

    private void Update()
    {
        if (GameManager.Instance.gameActive)
        {
            _direction.x = -SimpleInput.GetAxis("Horizontal") * moveSpeed;
            
            if (SimpleInput.GetAxis("Horizontal") != 0)
                _anim.SetBool("Running", true);
            else
                _anim.SetBool("Running", false);

            FallCheck();
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
        if (GameManager.Instance.gameActive && !GameManager.Instance.paused)
            rb.velocity = new Vector3(-SimpleInput.GetAxis("Horizontal") * moveSpeed, rb.velocity.y, 0);
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Obstacle") && GameManager.Instance.gameActive && alive)
        {
            FeedbacksManager.Instance.hitObstacleFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelFailed();
            DisablePlayer();
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

    private void FallCheck()
    {
        if (transform.position.y < -20)
        {
            FeedbacksManager.Instance.hitObstacleFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelFailed();
            DisablePlayer();
        }
    }
    
    private void GroundCheck()
    {
        grounded = Physics.Raycast(transform.position + new Vector3(0, 0.1f, 0), -Vector3.up, distToGround);
    }
    
    private void ChangeLayerOnLadder()
    {
        if (climbing && !grounded && SimpleInput.GetAxis("Vertical") > 0)
            gameObject.layer = LayerMask.NameToLayer("Ignore Collisions");
       else
            gameObject.layer = LayerMask.NameToLayer("Player");
    }

    private void Climbing()
    {
        if (canClimb && SimpleInput.GetAxis("Vertical") > 0)
            climbing = true;
        
        if (climbing && SimpleInput.GetAxis("Vertical") != 0)
        {
            rb.velocity = new Vector3(rb.velocity.x, SimpleInput.GetAxis("Vertical") * climbSpeed, rb.velocity.z);
            _anim.SetBool("Running", true);
        }
        else if (climbing && SimpleInput.GetAxis("Vertical") == 0)
        {
            rb.velocity = new Vector3(rb.velocity.x, 0, rb.velocity.z);
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
        if (SimpleInput.GetButtonDown("Jump") && grounded)
        {
            rb.AddForce(Vector3.up * jumpStrength, ForceMode.Impulse);
            FeedbacksManager.Instance.jumpFeedbacks.PlayFeedbacks();
        }
    }

    public void EnablePlayer()
    {
        alive = true;
        enabled = true;
        playerRenderer.enabled = true;
        crownRenderer.enabled = true;
        transform.position = FindObjectOfType<PlayerStartingPosition>().transform.position;
        rb.velocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;
        _anim.enabled = true;
    }
    
    public void DisablePlayer()
    {
        alive = false;
        playerRenderer.enabled = false;
        crownRenderer.enabled = false;
        enabled = false;
        rb.velocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;
        _anim.enabled = false;
    }

    public void Footstep()
    {
        if(grounded)
            FeedbacksManager.Instance.footstepFeedbacks.PlayFeedbacks();
    }
}