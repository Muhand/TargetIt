using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;
public class LeaderboardController : MonoBehaviour {

	public static LeaderboardController instance;
	public bool authenticated = false;

	private int currentPlyersHighestScore;

	void Start () {
		if (instance == null)
			instance = this;

		currentPlyersHighestScore = 0;

        Social.localUser.Authenticate(ProcessAuthentication);
	}
	
	void ProcessAuthentication(bool success)
    {
		if (success) {
			print ("Authenticated, checking achievements");
//			log.text += "Authenticated, checking ach÷ißevements" + Environment.NewLine;
			//Social.LoadAchievements (ProcessLoadedAchievements);
			//Social.LoadScores ("com.muhandjumah.targetit.leaderboard", ProcessLoadedScores);
//			Social.LoadScores (
//				"com.muhandjumah.targetit.leaderboard",
//				LeaderboardStart.PlayerCentered,
//				1,
//				LeaderboardCollection.Public,
//				LeaderboardTimeSpan.AllTime,
//				(LeaderboardScoreData data) => {
//					Debug.Log (data.Valid);
//					Debug.Log (data.Id);
//					Debug.Log (data.PlayerScore);
//					Debug.Log (data.PlayerScore.userID);
//					Debug.Log (data.PlayerScore.formattedValue);
//				});
			authenticated=true;
		} else {
			print ("Failed to authenticate");
			authenticated = false;
//			log.text += "Failed to authenticate" + Environment.NewLine;
		}
    }

	void ProcessLoadedScores(IScore[] scores)
	{
		if (scores.Length == 0) {
			print ("Error: no scores found");
//			log.text += "Error: no scores found" + Environment.NewLine;
		}
		else 
		{
			print ("Found scores");
			print ("Length: " + scores.Length);
			print (Convert.ToInt32 (scores [0].value));
//			log.text += scores.Length;
			//log.text += scores.Length + Environment.NewLine+Social.localUser.id;
			//currentPlyersHighestScore = Convert.ToInt32(scores[Convert.ToInt32(Social.localUser.id)]);
//			currentPlyersHighestScore = Convert.ToInt32(scores[0]);
//			log.text += scores[0].value;ß
			//currentPlyersHighestScore = Convert.ToInt32(scores[0].value);
			currentPlyersHighestScore = ToInt(scores[0].value);
		}
	}
	private int ToInt(long? value) {
		if (value.HasValue)
			return Convert.ToInt32(value);

		return 0; //the input value was null
	}

//    void ProcessLoadedAchievements(IAchievement[] achievements)
//    {
//        if (achievements.Length == 0)
//            print("Error: no achievments found");
//        else
//            print("Got "+achievements.Length+" achievments");
//    }

	public int getPlyersHighestScore()
	{
		return currentPlyersHighestScore;
	}

    void LoadLeaderBoard()
    {
        Social.ShowLeaderboardUI();
    }
}
