using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectorSpawner : MonoBehaviour {

    public static CollectorSpawner instance;
    GameObject CollectorPrefab;
    float currentSpeedMultiplier;


    // Use this for initialization
    void Start () {
        CollectorPrefab = GameManager.instance.currentCollectorSkin;

        SpawnNewCollector(new Vector3(0, 3, 0), GameplayController.instance.usedColors[0]);
        SpawnNewCollector(new Vector3(2, 1, 0), GameplayController.instance.usedColors[1]);
        SpawnNewCollector(new Vector3(-2, 1, 0), GameplayController.instance.usedColors[2]);
        currentSpeedMultiplier = 1.3f;
    }

    private void FixedUpdate()
    {
        if(GameplayController.instance.currentCollectors.Count < 3)
        {
            print("Spawning new collecor");

            for (int i = 0; i < GameplayController.instance.currentlyDeletedCollectors.Count; i++)
            {
                Vector3 temp = GameplayController.instance.currentlyDeletedCollectors[i];
                SpawnNewCollector(temp);
                GameplayController.instance.currentlyDeletedCollectors.Remove(temp);
            }
        }
    }

    void SpawnNewCollector(Vector3 position)
    {
        var newObj = Instantiate(CollectorPrefab, position, transform.rotation);
        instantiateObject(newObj);
    }


    void SpawnNewCollector(Vector3 position, Color color)
    {
        var newObj = Instantiate(CollectorPrefab, position, transform.rotation);
        instantiateObject(newObj, color);
    }

    void SpawnNewCollector(Vector3 position, Quaternion rotation)
    {
        var newObj = Instantiate(CollectorPrefab, position, rotation);
        instantiateObject(newObj);
    }
    void SpawnNewCollector(Vector3 position, Quaternion rotation, Color color)
    {
        var newObj = Instantiate(CollectorPrefab, position, rotation);
        instantiateObject(newObj, color);
    }

    void instantiateObject(GameObject obj)
    {
        if(GameplayController.instance.currentCollectors.Count > 0)
        {
            List<Color> temp = new List<Color>();
            for (int i = 0; i < GameplayController.instance.currentCollectors.Count; i++)
                temp.Add(GameplayController.instance.currentCollectors[i].GetComponent<SpriteRenderer>().color);
            GameplayController.instance.usedColors.RemoveRange(0, GameplayController.instance.usedColors.Count);

            for (int i = 0; i < temp.Count; i++)
                GameplayController.instance.usedColors.Add(temp[i]);
        }

        int r = Random.Range(0, GameplayController.instance.availableColors.Count);
        Color selectedColor = GameplayController.instance.availableColors[r];
        if (GameplayController.instance.currentCollectors.Count > 0)
        {
            GameplayController.instance.usedColors.Add(selectedColor);

            for (int i = 0; i < GameplayController.instance.currentPins.Count; i++)
            {
                if(!GameplayController.instance.usedColors.Contains(GameplayController.instance.currentPins[i].GetComponent<SpriteRenderer>().color))
                {
                    GameObject tempPin = GameplayController.instance.currentPins[i];
                    GameObject tempSpear = tempPin.GetComponent<Pin>().spear;
                    tempPin.GetComponent<SpriteRenderer>().color = selectedColor;
                    tempSpear.GetComponent<SpriteRenderer>().color = selectedColor;
                }
            }

        }
        obj.gameObject.GetComponent<SpriteRenderer>().color = selectedColor;
        obj.gameObject.GetComponent<Collector>().rotationSpeed = GameplayController.instance.speedOfDiedController* currentSpeedMultiplier;
        GameplayController.instance.currentCollectors.Add(obj);
    }
    void instantiateObject(GameObject obj, Color color)
    {
        obj.gameObject.GetComponent<SpriteRenderer>().color = color;
        GameplayController.instance.currentCollectors.Add(obj);
    }
}
