using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class BarrelSpawner : MonoBehaviour
{
    public float minTime = 2f;
    public float maxTime = 4f;

    private Boss _boss;

    private void Start()
    {
        _boss = GetComponentInParent<Boss>();

        StartCoroutine(SpawnBarrel());
    }
    
    private IEnumerator SpawnBarrel()
    {
        _boss.RollBarrel();
        yield return new WaitForSeconds(0.5f);
        var barrel = BarrelPooler.Instance.SpawnObject(transform.position, Quaternion.Euler(90, 0, 0));
        barrel.GetComponent<Rigidbody>().AddForce(_boss.transform.forward * 10f, ForceMode.Impulse);
        yield return new WaitForSeconds(Random.Range(minTime, maxTime));
        StartCoroutine(SpawnBarrel());
    }
}