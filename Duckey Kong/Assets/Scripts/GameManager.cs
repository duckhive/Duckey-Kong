using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public int lives;
    public int score;
    public bool gameActive;

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
        gameActive = false;
        _levelIndex = levelIndex;



        StartCoroutine(LoadScene());
    }

    private IEnumerator LoadScene()
    {
        yield return new WaitForSeconds(1f);
        SceneManager.LoadScene(_levelIndex);
        var camera = Camera.main;

        if (camera != null)
        {
            camera.cullingMask = 0;
        }
        
        
        gameActive = true;
    }
    
}
