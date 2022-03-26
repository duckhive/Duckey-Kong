using System;
using UnityEngine;

public class Boss : MonoBehaviour
{
    [HideInInspector] public Animator anim;

    private void Awake()
    {
        anim = GetComponent<Animator>();
    }

    public void RollBarrel()
    {
        transform.eulerAngles = new Vector3(0, -90, 0);
        anim.ResetTrigger("Roll");
        anim.SetTrigger("Roll");
    }
}