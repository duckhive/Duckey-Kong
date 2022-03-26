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

    private Boss _boss;

    private void Start()
    {
        _boss = GetComponentInParent<Boss>();

        StartCoroutine(Spawn());
    }

    private IEnumerator Spawn()
    {
        _boss.RollBarrel();
        yield return new WaitForSeconds(0.5f);
        var barrel = Instantiate(barrelPrefab, transform.position, Quaternion.Euler(90,0,0));
        barrel.GetComponent<Rigidbody>().AddForce(_boss.transform.forward * 10f, ForceMode.Impulse);
        yield return new WaitForSeconds(Random.Range(minTime, maxTime));
        StartCoroutine(Spawn());
    }
}
