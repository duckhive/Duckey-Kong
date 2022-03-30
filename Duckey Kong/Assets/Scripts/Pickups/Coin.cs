using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    [SerializeField] private GameObject vfxPickup;
    
    private Renderer _renderer;
    private Collider _collider;

    private void Awake()
    {
        _renderer = GetComponent<Renderer>();
        _collider = GetComponent<Collider>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<PlayerManager>())
        {
            GameManager.Instance.score += 10;
            FeedbacksManager.Instance.coinPickupFeedbacks.PlayFeedbacks();
            CoinManager.Instance.AddCoin();
            vfxPickup.SetActive(true);
            _renderer.enabled = false;
            _collider.enabled = false;
            StartCoroutine(DestroyAfterDelay(1));
        }
    }

    private IEnumerator DestroyAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        Destroy(gameObject);
    }
}
