using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

    public static GameManager instance;
    public GameObject currentPinSkin;
    public GameObject currentCollectorSkin;

    [SerializeField]
    GameObject[] availablePinSkins;
    [SerializeField]
    GameObject[] availableCollectorSkins;
    [SerializeField]
    GameObject tutorialPanel;
    
    public bool playingTutorial = false;


    void Awake () {
        QualitySettings.vSyncCount = 0;  // VSync must be disabled
        Application.targetFrameRate = 45;
        MakeSingleton();
        setCurrentPinSkin();
        setCurrentCollectorSkin();
        initializePlayerPrefs();

        PlayerPrefs.DeleteAll();
    }

    public void setCurrentPinSkin()
    {
        Skins.Pin temp = GamePreferences.GetPinSkin();

        foreach (GameObject obj in availablePinSkins)
        {
            if(obj.name == temp.ToString())
            {
                currentPinSkin = obj;
                break;
            }
        }
    }
    public void setCurrentCollectorSkin()
    {
        Skins.Collector temp = GamePreferences.GetCollectorSkin();

        foreach (GameObject obj in availableCollectorSkins)
        {
            if (obj.name == temp.ToString())
            {
                currentCollectorSkin = obj;
                break;
            }
        }
    }

    void MakeSingleton()
    {
        if (instance != null)
            Destroy(gameObject);
        else
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
    }

    void initializePlayerPrefs()
    {
        if (!PlayerPrefs.HasKey("Game Initialized"))
        {
            GamePreferences.SetMusicState(Assets.Scripts.Enums.Settings.Music.On);
            //			if(LeaderboardController.instance.authenticated)
            //				GamePreferences.SetHighestScore (LeaderboardController.instance.getPlyersHighestScore());
            //			else
            GamePreferences.SetHighestScore(0);
            GamePreferences.SetPinSkin(Skins.Pin.Default);
            GamePreferences.SetCollectorSkin(Skins.Collector.Default);
            GamePreferences.SetAdsSettings(Assets.Scripts.Enums.Settings.Ads.Show);

            PlayerPrefs.SetInt("Game Initialized", 0);

            //Enable tutorial since this is the first time the user downloads the game
            tutorialPanel.SetActive(true);
            playingTutorial = true;
        }
        else
            Destroy(tutorialPanel);

    }
}
