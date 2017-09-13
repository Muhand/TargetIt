using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;

public class LeaderboardController : MonoBehaviour {

	void Start () {
        Social.localUser.Authenticate(ProcessAuthentication);
	}
	
	void ProcessAuthentication(bool success)
    {
        if (success)
        {
            print("Authenticated, checking achievements");
            Social.LoadAchievements(ProcessLoadedAchievements);
        }
        else
            print("Failed to authenticate");
    }
    void ProcessLoadedAchievements(IAchievement[] achievements)
    {
        if (achievements.Length == 0)
            print("Error: no achievments found");
        else
            print("Got "+achievements.Length+" achievments");
    }

    void LoadLeaderBoard()
    {
        Social.ShowLeaderboardUI();
    }
}
