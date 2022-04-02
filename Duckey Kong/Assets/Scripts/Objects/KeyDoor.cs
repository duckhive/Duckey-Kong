using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyDoor : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Key>())
        {
            gameObject.SetActive(false);
            other.gameObject.SetActive(false);
        }
    }
}
