using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trampoline : MonoBehaviour
{
    [SerializeField] private float springForce = 20f;
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<PlayerManager>())
        {
            PlayerManager.Instance.controller.Motor.ForceUnground();
            PlayerManager.Instance.controller.SetVelocity(Vector3.up * springForce);
        }
    }
}
