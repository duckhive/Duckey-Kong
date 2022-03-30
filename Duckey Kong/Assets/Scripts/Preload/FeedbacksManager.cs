using MoreMountains.Feedbacks;
using UnityEngine;

public class FeedbacksManager : MonoBehaviour
{
    public static FeedbacksManager Instance;

    public MMFeedbacks hitObstacleFeedbacks;
    public MMFeedbacks reachObjectiveFeedbacks;
    public MMFeedbacks jumpFeedbacks;
    public MMFeedbacks footstepFeedbacks;
    public MMFeedbacks coinPickupFeedbacks;
    public MMFeedbacks gainLifeFeedbacks;
    public MMFeedbacks killEnemyFeedbacks;
    public MMFeedbacks gameOverFeedbacks;

    
    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);
    }
    
}