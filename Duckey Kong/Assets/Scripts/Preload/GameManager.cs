using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public int lives;
    public int score;
    public bool gameActive;
    public bool paused;

    private int _currentLevelIndex;
    [SerializeField] private List<int> _levelsYetToPlay = new List<int>();

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else 
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);

        AddAllScenesToLevelList();
    }

    private void Update()
    {
        if(Input.GetButtonDown("Pause") && !paused)
            PauseGame();
        else if(Input.GetButtonDown("Pause") && paused)
            ResumeGame();
    }

    #region Random Level Methods
    
        private void AddAllScenesToLevelList()
        {
            for (int i = 1; i < SceneManager.sceneCountInBuildSettings; i++)
            {
                _levelsYetToPlay.Add(i);
            }
        }

        private void RemoveAllScenesFromLevelList()
        {
            _levelsYetToPlay.Clear();
        }

        private int GetRandomLevel()
        {
            var random = Random.Range(0, _levelsYetToPlay.Count);

            _currentLevelIndex = _levelsYetToPlay[random];
            return _currentLevelIndex;
        }

        private void RemoveCurrentSceneFromList(int scene)
        {
            _levelsYetToPlay.Remove(scene);
        }
    
    #endregion

    public void NewGame()
    {
        lives = 3;
        score = 0;
        CoinManager.Instance.coinsCollected = 0;

        RemoveAllScenesFromLevelList();
        AddAllScenesToLevelList();
        
        LoadLevel(GetRandomLevel(), 0);
        ResumeGame();
    }

    public void LevelComplete()
    {
        score += 1000;
        
        RemoveCurrentSceneFromList(_currentLevelIndex);

        if (_levelsYetToPlay.Count == 0)
        {
            AddAllScenesToLevelList();
            LoadLevel(GetRandomLevel(), 2);
        }
        else
        {
            LoadLevel(GetRandomLevel(), 2);
        }
    }

    public void LevelFailed()
    {
        lives--;
        gameActive = false;
        
        if (lives <= 0)
        {
            UiManager.Instance.uiGameOverPanel.SetActive(true);
            FeedbacksManager.Instance.gameOverFeedbacks.PlayFeedbacks();

            if (score > PlayerPrefs.GetInt("high score") || PlayerPrefs.GetInt("high score") == null)
            {
                PlayerPrefs.SetInt("high score", score);
                UiManager.Instance.SetNewTextToActive();
            }
            else
            {
                UiManager.Instance.SetNewTextToNotActive();
            }
            
            UiManager.Instance.SetHighScoreText();
        }
        else
        {
            LoadLevel(_currentLevelIndex, 1);
        }
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

    public void ContinueGame()
    {
        lives = 1;
        UiManager.Instance.uiGameOverPanel.SetActive(false);
        LoadLevel(_currentLevelIndex, 1);
    }
    

    private void LoadLevel(int levelIndex, float delay)
    {
        BarrelPooler.Instance.ReturnAllObjects();
        UiManager.Instance.uiStartPanel.SetActive(false);
        
        gameActive = false;
        _currentLevelIndex = levelIndex;

        UiManager.Instance.uiHudPanel.SetActive(false);
        
        StartCoroutine(LoadSceneWithDelay(delay));
    }

    private IEnumerator LoadSceneWithDelay(float delay)
    {
        yield return new WaitForSeconds(delay);

        UiManager.Instance.FadeOn();
        SceneManager.LoadScene(_currentLevelIndex);

        yield return new WaitForSeconds(0.5f);
        
        UiManager.Instance.FadeOff();
        UiManager.Instance.uiHudPanel.SetActive(true);
        PlayerManager.Instance.EnablePlayer();
        ObjectiveManager.Instance.EnableObjective();
        PlayerManager.Instance.controller.FindGroundColliderAndAddToIgnoreList();
        
        gameActive = true;
    }
}
