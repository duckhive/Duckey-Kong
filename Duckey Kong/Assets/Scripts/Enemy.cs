using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField] private float moveSpeed = 10f;
    [SerializeField] private Transform leftSensor;
    [SerializeField] private Transform rightSensor;
    [SerializeField] private LayerMask groundLayer;
    
    private Rigidbody _rb;
    private Vector3 _direction;

    private void Awake()
    {
        _rb = GetComponent<Rigidbody>();
    }

    private void Start()
    {
        _direction.x = 1f;
    }

    private void Update()
    {
        if(_direction.x > 0)
            ScanSensorDown(leftSensor);
        else
            ScanSensorDown(rightSensor);
    }

    private void FixedUpdate()
    {
        if(GameManager.Instance.gameActive && !GameManager.Instance.paused)
            _rb.MovePosition(_rb.position + _direction * moveSpeed * Time.fixedDeltaTime);
    }

    private void ScanSensorDown(Transform sensor)
    {
        Debug.DrawRay(sensor.position, Vector3.down * 1f, Color.red);

        var result = Physics.Raycast(sensor.position, Vector3.down, 1f, groundLayer);
        if(result == false)
            TurnAround();
        else
            ScanSensorSide(sensor);
    }
    
    private void ScanSensorSide(Transform sensor)
    {
        Debug.DrawRay(sensor.position, new Vector3(_direction.x, 0, 0) * 0.1f, Color.red);

        var result = Physics.Raycast(sensor.position, new Vector3(_direction.x, 0, 0), 0.1f, groundLayer);
        if(result)
            TurnAround();
    }
    
    private void TurnAround()
    {
        _direction.x *= -1f;
    }
    
}
