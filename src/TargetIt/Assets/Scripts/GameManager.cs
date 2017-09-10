using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

    public static GameManager instance;
    
    void Awake () {
        QualitySettings.vSyncCount = 0;  // VSync must be disabled
        Application.targetFrameRate = 45;
        MakeSingleton();
        initializePlayerPrefs();
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
        if(!PlayerPrefs.HasKey("Game Initialized"))
        {
            GamePreferences.SetMusicState(Assets.Scripts.Enums.Settings.Music.On);
            GamePreferences.SetHighestScore(0);

            PlayerPrefs.SetInt("Game Initialized", 0);
        }
        
    }
}
