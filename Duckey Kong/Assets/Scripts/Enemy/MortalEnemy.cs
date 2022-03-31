using System;
using System.Collections;
using UnityEngine;

public class MortalEnemy : MonoBehaviour
{
    [SerializeField] private GameObject vfxDeath;
    
    private Renderer _renderer;
    private Collider _collider;
    private Rigidbody _rb;
    private Animator _anim;

    private void Awake()
    {
        _renderer = GetComponentInChildren<Renderer>();
        _collider = GetComponent<Collider>();
        _rb = GetComponent<Rigidbody>();
        _anim = GetComponent<Animator>();
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.collider.GetComponent<PlayerManager>() && GameManager.Instance.gameActive && PlayerManager.Instance.alive)
        {
            var normal = other.contacts[0].normal;
            if (normal.y <= -0.5f)
            {
                PlayerManager.Instance.controller.AddVelocity(Vector3.up * 10f);
                GameManager.Instance.score += 100;
                StartCoroutine(Die());
            }
            else
            {
                FeedbacksManager.Instance.hitObstacleFeedbacks.PlayFeedbacks();
                GameManager.Instance.LevelFailed();
                PlayerManager.Instance.DisablePlayer();
            }
                
        }
    }

    private IEnumerator Die()
    {
        FeedbacksManager.Instance.killEnemyFeedbacks.PlayFeedbacks();
        vfxDeath.SetActive(true);
        _collider.enabled = false;
        _rb.useGravity = false;
        _rb.constraints = RigidbodyConstraints.FreezeAll;
        _anim.ResetTrigger("Die");
        _anim.SetTrigger("Die");
        yield return new WaitForSeconds(1f);
        Destroy(gameObject);
    }
}