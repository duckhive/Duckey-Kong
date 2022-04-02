using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{
    [SerializeField] private Transform endLocation;
    [SerializeField] private float cooldownLength = 1f;
    
    private bool _cooldown;
    private AudioSource _audioSource;

    private void Awake()
    {
        _audioSource = GetComponent<AudioSource>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<PlayerManager>() && !_cooldown)
        {
            PlayerManager.Instance.controller.Motor.SetPosition(endLocation.position);
            FeedbacksManager.Instance.teleportFeedbacks.PlayFeedbacks();
            StartCoroutine(Cooldown());
        }
    }

    private IEnumerator Cooldown()
    {
        _cooldown = true;
        yield return new WaitForSeconds(cooldownLength);
        _cooldown = false;
    }
}
