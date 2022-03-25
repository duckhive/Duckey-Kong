using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using Random = UnityEngine.Random;

public class BarrelSpawner : MonoBehaviour
{
    public GameObject barrelPrefab;
    public float minTime = 2f;
    public float maxTime = 4f;

    private void Start()
    {
        Spawn();
    }

    private void Spawn()
    {
        Instantiate(barrelPrefab, transform.position, Quaternion.Euler(90,0,0));
        Invoke(nameof(Spawn), Random.Range(minTime, maxTime));
    }
}
