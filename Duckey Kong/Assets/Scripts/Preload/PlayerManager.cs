using System;
using System.Collections;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    public static PlayerManager Instance;
    
    [SerializeField] private bool grounded;
    [SerializeField] public Renderer playerRenderer;
    [SerializeField] public Renderer crownRenderer;
    [SerializeField] public GameObject vfxTrailSmoke;

    [HideInInspector] public bool alive;
    [HideInInspector] public Animator anim;
    [HideInInspector] public DuckController controller;
    [HideInInspector] public Rigidbody rb;

    public bool canClimb;
    public bool climbing;
    public bool climbingUp;
    public bool climbingDown;
    public bool stayOnLadder;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else 
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);
        
        anim = GetComponent<Animator>();
        controller = GetComponent<DuckController>();
        rb = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        if (GameManager.Instance.gameActive)
        {
            FallOutOfWorldCheck();
            ChangeLayerOnLadder();
            Climbing();
            Quack();
        }
        else
        {
            anim.SetBool("Running", false);
        }
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
            climbingUp = false;
            climbingDown = false;
            stayOnLadder = false;
        }
    }

    private void Climbing()
    {
        if (canClimb && SimpleInput.GetAxis("Vertical") > 0.5f)
        {
            climbing = true;
            climbingUp = true;
            climbingDown = false;
            stayOnLadder = false;
        }
        else if (canClimb && SimpleInput.GetAxis("Vertical") < -0.5f)
        {
            climbing = true;
            climbingDown = true;
            climbingUp = false;
            stayOnLadder = false;
        }
        else if (climbing && SimpleInput.GetAxis("Vertical") == 0)
        {
            stayOnLadder = true;
            climbingUp = false;
            climbingDown = false;
        }
    }
    
    private void ChangeLayerOnLadder()
    {
        if (climbing && !grounded && SimpleInput.GetAxis("Vertical") > 0)
            gameObject.layer = LayerMask.NameToLayer("Ignore Collisions");
        else
            gameObject.layer = LayerMask.NameToLayer("Player");
    }
    
    private void FallOutOfWorldCheck()
    {
        if (transform.position.y < -30)
        {
            FeedbacksManager.Instance.hitObstacleFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelFailed();
            DisablePlayer();
        }
    }

    private void Quack()
    {
        if (Input.GetButtonDown("Quack"))
        {
            FeedbacksManager.Instance.quackFeedbacks.PlayFeedbacks();
            anim.ResetTrigger("Quack");
            anim.SetTrigger("Quack");
        }
    }

    public void EnablePlayer()
    {
        alive = true;
        enabled = true;
        playerRenderer.enabled = true;
        crownRenderer.enabled = true;
        controller.Motor.SetPosition(FindObjectOfType<PlayerStartingPosition>().transform.position);
        anim.enabled = true;
        vfxTrailSmoke.SetActive(true);
    }
    
    public void DisablePlayer()
    {
        alive = false;
        playerRenderer.enabled = false;
        crownRenderer.enabled = false;
        enabled = false;
        anim.enabled = false;
        vfxTrailSmoke.SetActive(false);
        if(GetComponentInChildren<Key>() != null)
            GetComponentInChildren<Key>().DestroyKey();
    }
}