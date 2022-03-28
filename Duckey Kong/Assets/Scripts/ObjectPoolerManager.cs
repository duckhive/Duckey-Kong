using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ObjectPoolerManager : MonoBehaviour
{
    public GameObject objectToPool;

    public List<GameObject> pool = new List<GameObject>();

    public int startAmount;

    protected virtual void Start()
    {
        for (int i = 0; i < startAmount; i++)
        {
            pool.Add(Instantiate(objectToPool));
            pool[i].SetActive(false);
            pool[i].transform.parent = transform;
        }
    }

    public virtual GameObject SpawnObject(Vector3 pos, Quaternion rot)
    {
        GameObject toReturn;

        if (pool.Count > 0)
        {
            toReturn = pool[0]; 
            pool.RemoveAt(0);
        }
        else
        {
            toReturn = Instantiate(objectToPool);
            toReturn.transform.parent = transform;
        }
        
        toReturn.SetActive(true);
        toReturn.transform.position = pos;
        toReturn.transform.rotation = rot;
        
        return toReturn;
    }

    public virtual void ReturnObject(GameObject objectToReturn)
    {
        pool.Add(objectToReturn);
        objectToReturn.SetActive(false);
    }

    public virtual void ReturnAllObjects()
    {
        var barrels = FindObjectsOfType<Barrel>();
        
        foreach (var barrel in barrels)
        {
            if (barrel.gameObject.activeSelf)
            {
                pool.Add(barrel.gameObject);
                barrel.gameObject.SetActive(false);
            }
        }
    }
}