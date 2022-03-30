using TMPro;
using UnityEngine;

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
    public TMP_Text uiBreadCount;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
        
        DontDestroyOnLoad(gameObject);

        uiHudPanel.SetActive(false);
        uiStartPanel.SetActive(true);
    }
    
    private void Update()
    {
        uiScoreText.text = $"{GameManager.Instance.score}";
        uiLivesText.text = $"{GameManager.Instance.lives}";
        uiBreadCount.text = $"{CoinManager.Instance.coinsCollected}";
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