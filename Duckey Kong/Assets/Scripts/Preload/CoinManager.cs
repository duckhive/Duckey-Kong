using System;
using UnityEngine;

public class CoinManager : MonoBehaviour
{
    public static CoinManager Instance;

    public int coinsCollected;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);
    }

    public void CoinsToZero()
    {
        coinsCollected = 0;
    }

    public void AddCoin()
    {
        coinsCollected++;
        if (coinsCollected > 99)
        {
            coinsCollected = 0;
            GameManager.Instance.lives++;
            FeedbacksManager.Instance.gainLifeFeedbacks.PlayFeedbacks();
        }
    }
}