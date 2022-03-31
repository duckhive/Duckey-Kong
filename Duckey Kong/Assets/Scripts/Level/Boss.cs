using System;
using UnityEngine;

public class Boss : MonoBehaviour
{
    [HideInInspector] public Animator anim;

    private BarrelSpawner _barrelSpawner;
    
    private void Awake()
    {
        anim = GetComponent<Animator>();
        _barrelSpawner = GetComponentInParent<BarrelSpawner>();
    }

    public void RollBarrel()
    {
        if(_barrelSpawner.direction == Direction.right)
            transform.eulerAngles = new Vector3(0, -90, 0);
        else
            transform.eulerAngles = new Vector3(0, 90, 0);
        
        anim.ResetTrigger("Roll");
        anim.SetTrigger("Roll");
    }
}