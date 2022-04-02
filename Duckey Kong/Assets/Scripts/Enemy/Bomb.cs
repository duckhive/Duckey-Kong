using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Bomb : MonoBehaviour
{
    [SerializeField] private GameObject vfxExplosion;
    
    private Animator _anim;
    private Rigidbody _rb;
    private List<Collider> _colliders;
    private AudioSource _audioSource;

    private void Awake()
    {
        _anim = GetComponent<Animator>();
        _rb = GetComponent<Rigidbody>();
        _colliders = GetComponents<Collider>().ToList();
        _audioSource = GetComponent<AudioSource>();
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.collider.GetComponent<PlayerManager>())
            Explode();
    }

    private void OnTriggerEnter(Collider other)
    { 
        if (other.GetComponent<PlayerManager>())
            StartCoroutine(PreExplode());
    }

    private IEnumerator PreExplode()
    {
        _rb.constraints = RigidbodyConstraints.FreezeAll;
        
        _anim.ResetTrigger("PreExplode");
        _anim.SetTrigger("PreExplode");
        
        yield return new WaitForSeconds(2);
        Explode();
    }

    private void Explode()
    {
        _audioSource.Play();
        
        GetComponentInChildren<Renderer>().enabled = false;
        
        vfxExplosion.SetActive(true);

        if (Vector3.Distance(PlayerManager.Instance.transform.position, transform.position) < 3 && PlayerManager.Instance.alive)
        {
            FeedbacksManager.Instance.hitObstacleFeedbacks.PlayFeedbacks();
            GameManager.Instance.LevelFailed();
            PlayerManager.Instance.DisablePlayer();
        }
        
        foreach (var collider in _colliders)
        {
            collider.enabled = false;
        }
        
        StartCoroutine(PostExplode());
    }

    private IEnumerator PostExplode()
    {
        yield return new WaitForSeconds(2f);
        Destroy(gameObject);
    }
}
