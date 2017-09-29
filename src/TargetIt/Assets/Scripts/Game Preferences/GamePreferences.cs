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

    public static void SetPinSkin(Skins.Pin skin)
    {
        PlayerPrefs.SetInt(Settings.SettingsNames.SelectedPinSkin.ToString(), (int)skin);
    }
    public static Skins.Pin GetPinSkin()
    {
        int skin = PlayerPrefs.GetInt(Settings.SettingsNames.SelectedPinSkin.ToString());
        var res = (Skins.Pin)skin;
        return res;
    }

    public static void SetCollectorSkin(Skins.Collector skin)
    {
        PlayerPrefs.SetInt(Settings.SettingsNames.SelectedCollectorSkin.ToString(), (int)skin);
    }
    public static Skins.Collector GetCollectorSkin()
    {
        int skin = PlayerPrefs.GetInt(Settings.SettingsNames.SelectedCollectorSkin.ToString());
        var res = (Skins.Collector)skin;
        return res;
    }
	public static void SetAdsSettings(Settings.Ads state)
	{
		PlayerPrefs.SetInt (Settings.SettingsNames.Ads.ToString (), (int)state);
	}
	public static Settings.Ads GetAdsSettings()
	{
		int state = (PlayerPrefs.GetInt(Settings.SettingsNames.Ads.ToString()));
		var res = (Settings.Ads)state;
		return res;
	}

}
