using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public int lives;
    public int score;
    public bool gameActive;
    public bool paused;

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

    private void Update()
    {
        if(Input.GetButtonDown("Pause") && !paused)
            PauseGame();
        else if(Input.GetButtonDown("Pause") && paused)
            ResumeGame();
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

    public void PauseGame()
    {
        if (!gameActive) return;
        
        UiManager.Instance.uiPausedPanel.SetActive(true);
        paused = true;
        Time.timeScale = 0;
    }
    
    public void ResumeGame()
    {
        UiManager.Instance.uiPausedPanel.SetActive(false);
        paused = false;
        Time.timeScale = 1;
    }
    

    private void LoadLevel(int levelIndex)
    {
        gameActive = false;
        _levelIndex = levelIndex;
        
        UiManager.Instance.uiHudPanel.SetActive(false);
        
        StartCoroutine(LoadScene());
    }

    private IEnumerator LoadScene()
    {
        yield return new WaitForSeconds(2f);

        UiManager.Instance.FadeOn();
        SceneManager.LoadScene(_levelIndex);

        yield return null;
        
        UiManager.Instance.FadeOff();
        UiManager.Instance.uiHudPanel.SetActive(true);
        PlayerManager.Instance.EnablePlayer();

        gameActive = true;
    }
}
