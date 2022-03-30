using System;
using UnityEngine;

public class ImmortalEnemy : MonoBehaviour
{
    private void OnCollisionEnter(Collision other)
    {
        if (other.collider.GetComponent<PlayerManager>() && GameManager.Instance.gameActive && PlayerManager.Instance.alive)
        {
            FeedbacksManager.Instance.hitObstacleFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelFailed();
            PlayerManager.Instance.DisablePlayer();
        }
    }
}