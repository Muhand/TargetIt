using Assets.Scripts.Enums;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialController : MonoBehaviour {
    [SerializeField]
    GameObject[] tutorialPanels;
    [SerializeField]
    GameObject pinsPanel, collectorsPanel;

    private int counter = 0;

	// Use this for initialization
	void Start () {
        print("Tutorial is on");
        Time.timeScale = 0.0f;
        pinsPanel.SetActive(true);
        collectorsPanel.SetActive(false);
	}

    public void Next()
    {
        if (counter < tutorialPanels.Length - 1)
        {
            tutorialPanels[counter].SetActive(false);
            tutorialPanels[counter + 1].SetActive(true);

            switch (tutorialPanels[counter+1].GetComponent<TutorialScreen>().instance.ScreenType)
            {
                case TutorialScreenType.Pins:
                    pinsPanel.SetActive(true);
                    collectorsPanel.SetActive(false);
                    break;
                case TutorialScreenType.Collectors:
                    pinsPanel.SetActive(false);
                    collectorsPanel.SetActive(true);
                    break;
                case TutorialScreenType.None:
                    pinsPanel.SetActive(false);
                    collectorsPanel.SetActive(false);
                    break;
                default:
                    pinsPanel.SetActive(true);
                    collectorsPanel.SetActive(true);
                    break;
            }

            counter++;
        }
        else
        {
            Destroy(gameObject);
            Time.timeScale = 1.0f;
            GameManager.instance.playingTutorial = false;
            pinsPanel.SetActive(true);
            collectorsPanel.SetActive(true);
        }


        
    }
    
}
