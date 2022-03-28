using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class BarrelSpawner : MonoBehaviour
{
    public GameObject barrelPrefab;
    public float minTime = 2f;
    public float maxTime = 4f;

    private PoolingManager _poolingManager;
    private Boss _boss;

    private void Start()
    {
        _poolingManager = PoolingManager.Instance;
        _boss = GetComponentInParent<Boss>();

        StartCoroutine(SpawnBarrel());
    }
    
    private IEnumerator SpawnBarrel()
    {
        _boss.RollBarrel();
        yield return new WaitForSeconds(0.5f);
        //var barrel = _poolingManager.SpawnFromPool("Barrel", transform.position, Quaternion.Euler(90, 0, 0));
        var barrel = BarrelPooler.Instance.SpawnObject(transform.position, Quaternion.Euler(90, 0, 0));
        barrel.GetComponent<Rigidbody>().AddForce(_boss.transform.forward * 10f, ForceMode.Impulse);
        yield return new WaitForSeconds(Random.Range(minTime, maxTime));
        StartCoroutine(SpawnBarrel());
    }
}