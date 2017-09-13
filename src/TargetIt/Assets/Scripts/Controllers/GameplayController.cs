using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class GameplayController : MonoBehaviour {
    //Public
    public static GameplayController instance;
    public List<Color> availableColors;
    public List<Color> usedColors;
    public List<GameObject> currentCollectors;
    public List<GameObject> currentPins;
    public List<Vector3> currentlyDeletedCollectors;
    public bool isShooting;
    public bool collectorIsDisappearing;
    public bool losing;
    private int score;
    [SerializeField]
    Text scoreField;
    [SerializeField]
    private Button musicBtn;
    [SerializeField]
    private Sprite[] musicIcons;
    public float speedOfDiedController;


    void Awake () {
        if (instance == null)
            instance = this;

        init();

        //PlayerPrefs.DeleteAll();
    }

    private void Update()
    {

        ////For Unity
        if (Input.GetMouseButtonDown(0) && !isShooting && !collectorIsDisappearing && !EventSystem.current.IsPointerOverGameObject())
        {
            isShooting = true;
            Vector3 position = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0);
            position = Camera.main.ScreenToWorldPoint(position);
            currentPins[0].GetComponent<Pin>().setTarget(position);
            //currentPins[0].GetComponent<Pin>().setTarget2(new Vector2(position.x,position.y));

            currentPins[0].GetComponent<Pin>().isMoving = true;
            currentPins[0].GetComponent<Pin>().spear.SetActive(true);

            currentPins.RemoveAt(0);
        }

        ////For Phone
        //if (Input.touchCount > 0 && !isShooting && !collectorIsDisappearing)
        //{
        //    if (Input.GetTouch(0).phase == TouchPhase.Began)
        //    {
        //        if (!EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
        //        {
        //            Vector3 fingerPos = Input.GetTouch(0).position;

        //            isShooting = true;
        //            Vector3 position = new Vector3(fingerPos.x, fingerPos.y, 0);
        //            position = Camera.main.ScreenToWorldPoint(position);
        //            currentPins[0].GetComponent<Pin>().setTarget(position);
        //            //currentPins[0].GetComponent<Pin>().setTarget2(new Vector2(position.x,position.y));

        //            currentPins[0].GetComponent<Pin>().isMoving = true;
        //            currentPins[0].GetComponent<Pin>().spear.SetActive(true);

        //            currentPins.RemoveAt(0);
        //        }
        //    }
        //}
    }
   

    private void init()
    {
        //Set FPS


        //Initialize lists
        availableColors = new List<Color>();
        usedColors = new List<Color>();

        //Add available colors
        availableColors.Add(Parse("#f1c40f"));
        availableColors.Add(Parse("#e74c3c"));
        availableColors.Add(Parse("#2ecc71"));
        availableColors.Add(Parse("#1abc9c"));
        availableColors.Add(Parse("#3498db"));
        availableColors.Add(Parse("#9b59b6"));
        availableColors.Add(Parse("#34495e"));
        availableColors.Add(Parse("#27ae60"));
        availableColors.Add(Parse("#2980b9"));
        availableColors.Add(Parse("#2c3e50"));
        availableColors.Add(Parse("#d35400"));
        //availableColors.Add(Parse("#f39c12"));
        availableColors.Add(Parse("#c0392b"));


        //Randomize 3 colors
        for (int i = 0; i < 3; i++)
        {
            int random = Random.Range(0, availableColors.Count);
            usedColors.Add(availableColors[random]);
        }

        //Initialize other variables
        currentCollectors = new List<GameObject>();
        currentPins = new List<GameObject>();
        isShooting = false;
        collectorIsDisappearing = false;
        losing = false;
        score = 0;
        speedOfDiedController = 0.0f;

        CheckToPlayMusic();
    }

    void CheckToPlayMusic()
    {
        if (GamePreferences.GetMusicState() == Assets.Scripts.Enums.Settings.Music.On)
        {
            MusicController.instance.PlayMusic(true);
            musicBtn.image.sprite = musicIcons[0];
        }
        else
        {
            MusicController.instance.PlayMusic(false);
            musicBtn.image.sprite = musicIcons[1];
        }
    }

    public void MusicButton()
    {
        if (GamePreferences.GetMusicState() == Assets.Scripts.Enums.Settings.Music.Off)
        {
            GamePreferences.SetMusicState(Assets.Scripts.Enums.Settings.Music.On);
            MusicController.instance.PlayMusic(true);
            musicBtn.image.sprite = musicIcons[0];
        }
        else
        {
            GamePreferences.SetMusicState(Assets.Scripts.Enums.Settings.Music.Off);
            MusicController.instance.PlayMusic(false);
            musicBtn.image.sprite = musicIcons[1];
        }
    }

    public void addScore(int newScore)
    {
        this.score += newScore;
        if(scoreField != null)
            scoreField.text = this.score.ToString();

        if (GamePreferences.GetHighestScore() < this.score)
        {
            GamePreferences.SetHighestScore(this.score);
            Social.ReportScore(this.score, "com.muhandjumah.targetit.leaderboard", (result) =>
            {
                if(result)
                    print("Score submission was successful");
            });
        }
    }

    public int getScore()
    {
        return this.score;
    }
    public static Color Parse(string hexstring)
    {
        if (hexstring.StartsWith("#"))
        {
            hexstring = hexstring.Substring(1);
        }

        if (hexstring.StartsWith("0x"))
        {
            hexstring = hexstring.Substring(2);
        }

        byte r = byte.Parse(hexstring.Substring(0, 2), NumberStyles.HexNumber);
        byte g = byte.Parse(hexstring.Substring(2, 2), NumberStyles.HexNumber);
        byte b = byte.Parse(hexstring.Substring(4, 2), NumberStyles.HexNumber);

        return new Color32(r, g, b, 255);
    }
}
