using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UiManager : MonoBehaviour
{
    public static UiManager Instance;

    public GameObject uiFader;
    public GameObject uiHudPanel;
    public GameObject uiStartPanel;
    public GameObject uiGameOverPanel;
    public GameObject uiPausedPanel;
    public TMP_Text uiScoreText;
    public TMP_Text uiLivesText;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);
        FadeOn();
        
        uiHudPanel.SetActive(false);
    }
    
    private void Update()
    {
        uiScoreText.text = $"{GameManager.Instance.score}";
        uiLivesText.text = $"{GameManager.Instance.lives}";
    }

    public void FadeOn()
    {
        uiFader.SetActive(true);
    }
    
    public void FadeOff()
    {
        uiFader.SetActive(false);
    }
    
}