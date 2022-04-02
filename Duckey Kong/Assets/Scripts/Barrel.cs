using System.Collections;
using UnityEngine;

public class Barrel : MonoBehaviour
{
    [HideInInspector] public Rigidbody rb;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }

    public IEnumerator DespawnAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        rb.velocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;
        BarrelPooler.Instance.ReturnObject(gameObject);
    }
}