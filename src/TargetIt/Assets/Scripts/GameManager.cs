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


    void Awake () {
        QualitySettings.vSyncCount = 0;  // VSync must be disabled
        Application.targetFrameRate = 45;
        MakeSingleton();
        setCurrentPinSkin();
        setCurrentCollectorSkin();
        initializePlayerPrefs();
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
        if(!PlayerPrefs.HasKey("Game Initialized"))
        {
            GamePreferences.SetMusicState(Assets.Scripts.Enums.Settings.Music.On);
            GamePreferences.SetHighestScore(0);
            GamePreferences.SetPinSkin(Skins.Pin.Default);
            GamePreferences.SetCollectorSkin(Skins.Collector.Default);


            PlayerPrefs.SetInt("Game Initialized", 0);
        }
        
    }
}
