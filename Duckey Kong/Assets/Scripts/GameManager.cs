using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public int lives;
    public int score;

    private int _levelIndex;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else 
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);
        NewGame();
    }

    public void NewGame()
    {
        lives = 3;
        score = 0;
        
        LoadLevel(1);
    }

    public void LevelComplete()
    {
        score += 1000;
        _levelIndex++;

        if(_levelIndex < SceneManager.sceneCountInBuildSettings)
            LoadLevel(_levelIndex);
        else
            LoadLevel(1);
    }

    public void LevelFailed()
    {
        lives--;

        if (lives <= 0)
            NewGame();
        else
            LoadLevel(_levelIndex);
    }

    private void LoadLevel(int levelIndex)
    {
        _levelIndex = levelIndex;

        var camera = Camera.main;

        if (camera != null)
        {
            camera.cullingMask = 0;
        }
        
        Invoke(nameof(LoadScene), 1f);
    }

    private void LoadScene()
    {
        SceneManager.LoadScene(_levelIndex);
    }
    
}
