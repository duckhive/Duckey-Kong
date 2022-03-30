using System;
using UnityEngine;

public class ObjectiveManager : MonoBehaviour
{
    public static ObjectiveManager Instance;
    
    [HideInInspector] public Renderer renderer;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else 
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);

        renderer = GetComponent<Renderer>();
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.collider.GetComponent<PlayerManager>() && GameManager.Instance.gameActive && PlayerManager.Instance.alive)
        {
            FeedbacksManager.Instance.reachObjectiveFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelComplete();
            ObjectiveReached();
        }
    }

    public void ObjectiveReached()
    {
        renderer.enabled = false;
    }

    public void EnableObjective()
    {
        transform.position = FindObjectOfType<ObjectiveStartingPosition>().transform.position;
        renderer.enabled = true;
    }
}