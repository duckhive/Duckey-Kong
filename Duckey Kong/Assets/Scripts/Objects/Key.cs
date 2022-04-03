using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Key : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent<KeyHolder>(out KeyHolder keyHolder))
        {
            PickupKey(keyHolder);
        }
    }

    public void PickupKey(KeyHolder keyHolder)
    {
        transform.SetParent(keyHolder.keyPosition);
        transform.position = keyHolder.keyPosition.position;
        FeedbacksManager.Instance.pickupKeyFeedbacks.PlayFeedbacks();
    }

    public void DestroyKey()
    {
        Destroy(gameObject);
    }
}