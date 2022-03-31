using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public enum Direction
{
    right,
    left
}

public class BarrelSpawner : MonoBehaviour
{
    public float minTime = 2f;
    public float maxTime = 4f;

    public Direction direction;

    private Boss _boss;

    private void Start()
    {
        _boss = GetComponentInChildren<Boss>();

        StartCoroutine(SpawnBarrel());
    }
    
    private IEnumerator SpawnBarrel()
    {
        _boss.RollBarrel();
        yield return new WaitForSeconds(0.5f);

        var barrel = BarrelPooler.Instance.SpawnObject(transform.position + new Vector3(0,0,-1), Quaternion.Euler(90, 0, 0));
        
        if (direction == Direction.right)
        {
            barrel.GetComponent<Rigidbody>().AddForce(Vector3.left * 12f, ForceMode.Impulse);
        }
        else
        {
            barrel.GetComponent<Rigidbody>().AddForce(Vector3.right * 12f, ForceMode.Impulse);
        }

        yield return new WaitForSeconds(Random.Range(minTime, maxTime));
        StartCoroutine(SpawnBarrel());
    }
}