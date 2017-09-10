using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.Scripts.Enums;
public static class GamePreferences
{
    public static void SetMusicState(Settings.Music state)
    {
        PlayerPrefs.SetInt(Settings.SettingsNames.Music.ToString(), (int)state);
    }
    public static Settings.Music GetMusicState()
    {
        int state = (PlayerPrefs.GetInt(Settings.SettingsNames.Music.ToString()));
        var res = (Settings.Music)state;
        return res;
    }

    public static void SetHighestScore(int score)
    {
        PlayerPrefs.SetInt(Settings.SettingsNames.HighestScore.ToString(), score);
    }
    public static int GetHighestScore()
    {
        return PlayerPrefs.GetInt(Settings.SettingsNames.HighestScore.ToString());
    }


}
