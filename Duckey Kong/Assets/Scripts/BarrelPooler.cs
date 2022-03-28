public class BarrelPooler : ObjectPoolerManager
{
    public static BarrelPooler Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else 
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);
    }
}