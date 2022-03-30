using System.Collections;
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
    }

    private void Update()
    {
        if(Input.GetButtonDown("Pause") && !paused)
            PauseGame();
        else if(Input.GetButtonDown("Pause") && paused)
            ResumeGame();
    }

    public void NewGame(float delay)
    {
        lives = 3;
        score = 0;

        CoinManager.Instance.coinsCollected = 0;
        LoadLevel(1, delay);
        ResumeGame();
    }

    public void LevelComplete()
    {
        score += 1000;
        _levelIndex++;

        if(_levelIndex < SceneManager.sceneCountInBuildSettings)
            LoadLevel(_levelIndex, 2);
        else
            LoadLevel(1, 2);
    }

    public void LevelFailed()
    {
        lives--;

        if (lives <= 0)
        {
            UiManager.Instance.uiGameOverPanel.SetActive(true);
            FeedbacksManager.Instance.gameOverFeedbacks.PlayFeedbacks();
        }
        else
        {
            LoadLevel(_levelIndex, 1);
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
        LoadLevel(_levelIndex, 1);
    }
    

    private void LoadLevel(int levelIndex, float delay)
    {
        BarrelPooler.Instance.ReturnAllObjects();
        UiManager.Instance.uiStartPanel.SetActive(false);
        
        gameActive = false;
        _levelIndex = levelIndex;

        UiManager.Instance.uiHudPanel.SetActive(false);
        
        StartCoroutine(LoadSceneWithDelay(delay));
    }

    private IEnumerator LoadSceneWithDelay(float delay)
    {
        yield return new WaitForSeconds(delay);

        UiManager.Instance.FadeOn();
        SceneManager.LoadScene(_levelIndex);

        yield return new WaitForSeconds(0.5f);
        
        UiManager.Instance.FadeOff();
        UiManager.Instance.uiHudPanel.SetActive(true);
        PlayerManager.Instance.EnablePlayer();
        ObjectiveManager.Instance.EnableObjective();
        
        gameActive = true;
    }
}
