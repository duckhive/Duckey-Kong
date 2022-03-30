using System;
using UnityEngine;

public class Boss : MonoBehaviour
{
    [SerializeField] private Direction direction;
    
    [HideInInspector] public Animator anim;

    public enum Direction
    {
        right,
        left
    }

    private void Awake()
    {
        anim = GetComponent<Animator>();
    }

    public void RollBarrel()
    {
        if(direction == Direction.right)
            transform.eulerAngles = new Vector3(0, -90, 0);
        else
            transform.eulerAngles = new Vector3(0, 90, 0);
        
        anim.ResetTrigger("Roll");
        anim.SetTrigger("Roll");
    }
}