using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PinSpawner : MonoBehaviour {

    public static PinSpawner instance;

    //[SerializeField]
    GameObject pinPrefab;
    float startingY;
    public bool allPinsSpawned = false;

    [SerializeField]
    GameObject PinsPanel;

    // Use this for initialization
    void Start () {
        if (instance == null)
            instance = this;
        ////startingY = -2f;
        ////float currentY = startingY;

        //////Must go in "Start" method because we want to give time to the collectors to add colors to Gameplay
        ////for (int i = 0; i < 8; i++)
        ////{
        ////    SpawnNewArrow(new Vector3(0, currentY, 0));
        ////    currentY = currentY + (startingY / 3);
        ////}

        //float currentY = transform.position.y;

        ////for (int i = 0; i < 4; i++)
        ////{
        ////    SpawnNewArrow(new Vector3(0, currentY, 0));
        ////    currentY = currentY - (transform.position.y / 6);
        ////}
        ////SpawnNewPin();
        pinPrefab = GameManager.instance.currentPinSkin;


        for (int i = 0; i < 4; i++)
        {
            if (i == 0)
            {
                SpawnNewArrow(transform.position);
            }
            else
            {
                for (int j = 0; j < GameplayController.instance.currentPins.Count; j++)
                {
                    Vector3 temp = GameplayController.instance.currentPins[j].transform.position;
                    temp.y += 0.7f;
                    GameplayController.instance.currentPins[j].transform.position = temp;
                }
                SpawnNewArrow(transform.position);
            }
        }
        allPinsSpawned = true;

    }

    private void FixedUpdate()
    {
        if (GameplayController.instance.currentPins.Count < 4 && allPinsSpawned == true)
        {
        
            //if (GameplayController.instance.currentPins.Count == 0)
            //{
            //    //SpawnNewArrow(new Vector3(0,-2,0));
            //    SpawnNewArrow(transform.position);
            //}
            //else
            //{
                //SpawnNewArrow(new Vector3(0, GameplayController.instance.currentPins[GameplayController.instance.currentPins.Count - 1].transform.position.y - 0.7f,0));
                for (int i = 0; i < GameplayController.instance.currentPins.Count; i++)
                {
                    Vector3 temp = GameplayController.instance.currentPins[i].transform.position;
                    temp.y += 0.7f;
                    GameplayController.instance.currentPins[i].transform.position = temp;
                    //GameplayController.instance.currentPins[i].GetComponent<Rigidbody2D>().MovePosition(new Vector2(temp.x, temp.y) + Vector2.up * Time.deltaTime * 40f);
                    //GameplayController.instance.currentPins[i].transform.Translate(temp*Time.deltaTime*40f);
                    //GameplayController.instance.currentPins[i].transform.position = Vector3.MoveTowards(GameplayController.instance.currentPins[i].transform.position, temp, 400000 * Time.deltaTime);
                }
                SpawnNewArrow(transform.position);
            //}
        }
        else
        {
  
        }
    }

    void SpawnNewArrow(Vector3 position)
    {
        var newObj = Instantiate(pinPrefab, position, transform.rotation);
        instantiateObject(newObj);
    }

    void SpawnNewArrow(Vector3 position, Quaternion rotation)
    {
        var newObj = Instantiate(pinPrefab, position, rotation);
        instantiateObject(newObj);
    }

    void instantiateObject(GameObject obj)
    {
        int r = Random.Range(0, GameplayController.instance.usedColors.Count);
        Color selectedColor = GameplayController.instance.usedColors[r];
        obj.gameObject.GetComponent<SpriteRenderer>().color = selectedColor;
        GameplayController.instance.currentPins.Add(obj);
        obj.transform.parent = PinsPanel.transform;
    }
}
