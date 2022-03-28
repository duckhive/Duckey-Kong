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

    private IEnumerator DespawnAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        BarrelPooler.Instance.ReturnObject(gameObject);
    }
}