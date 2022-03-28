using System;
using System.Collections;
using System.Collections.Generic;
using MoreMountains.Feedbacks;
using UnityEngine;

public class FeedbacksManager : MonoBehaviour
{
    public static FeedbacksManager Instance;

    public MMFeedbacks hitObstacleFeedbacks;
    public MMFeedbacks reachObjectiveFeedbacks;
    public MMFeedbacks jumpFeedbacks;
    public MMFeedbacks footstepFeedbacks;

    
    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);
    }
    
}