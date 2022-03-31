using System.Collections;
using UnityEngine;

public class Barrel : MonoBehaviour
{
    [SerializeField] private float lifetime;
    
    [HideInInspector] public Rigidbody rb;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnEnable()
    {
        StartCoroutine(DespawnAfterDelay(lifetime));
    }

    public IEnumerator DespawnAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        rb.velocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;
        BarrelPooler.Instance.ReturnObject(gameObject);
    }
}