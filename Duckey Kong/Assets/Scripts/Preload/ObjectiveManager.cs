using System;
using UnityEngine;

public class ObjectiveManager : MonoBehaviour
{
    public static ObjectiveManager Instance;
    
    [HideInInspector] public Renderer renderer;

    private Collider _collider;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else 
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);

        renderer = GetComponent<Renderer>();

        _collider = GetComponent<Collider>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<PlayerManager>() && GameManager.Instance.gameActive && PlayerManager.Instance.alive)
        {
            FeedbacksManager.Instance.reachObjectiveFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelComplete();
            ObjectiveReached();
        }
    }

    public void ObjectiveReached()
    {
        renderer.enabled = false;
        _collider.enabled = false;
    }

    public void EnableObjective()
    {
        transform.position = FindObjectOfType<ObjectiveStartingPosition>().transform.position;
        renderer.enabled = true;
        _collider.enabled = true;
    }
}