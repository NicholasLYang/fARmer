using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class DBConnect : MonoBehaviour {

	public string url = "http://images.earthcam.com/ec_metros/ourcams/fridays.jpg";
	IEnumerator Start()
	{
		WWW www = new WWW(url);
		Renderer renderer = GetComponent<Renderer>();
		renderer.material.mainTexture = www.texture;
		yield return url;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
