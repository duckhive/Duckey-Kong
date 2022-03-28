using UnityEngine;

public class ObjectiveManager : MonoBehaviour
{
    public static ObjectiveManager Instance;
    
    [HideInInspector] public Renderer renderer;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else 
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);

        renderer = GetComponent<Renderer>();
    }

    public void ObjectiveReached()
    {
        renderer.enabled = false;
    }

    public void EnableObjective()
    {
        transform.position = FindObjectOfType<ObjectiveStartingPosition>().transform.position;
        renderer.enabled = true;
    }
}