using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Net;
using System;
using System.Threading;
using UnityEngine;

public class LoginScreen : MonoBehaviour {

	public static int userID = 0;

	private string e = "demo@demo.com";
	private string n = "demo";
	private string p = "demo";

	private string emailString = string.Empty;
	private string nameString = string.Empty;
	private string passwordString = string.Empty;

	private Rect windowRect = new Rect (0, 0, Screen.width, Screen.height);

	private string tempUrl = "http://requestb.in/12kev541";
	private string realUrl = "e5cb6a3b.ngrok.io/users";
	private string getUrl = "e5cb6a3b.ngrok.io/current_user";
	private string farmerUrl = "http://arfarmer.org/current_user";

	[System.Serializable]
	public class Farmer {
		public string name;
		public int user_id;
		public int community_id;
	}

	// Use this for initialization
	void Start () 
	{
		var farmer_obj = new WebClient().DownloadString(getUrl);
		JSONObject farmer_json = new JSONObject (farmer_obj);

		string fName = JsonUtility.FromJson<Farmer> (farmer_obj).name;
		PlayerPrefs.SetString("fname.txt", fName);
		int fID = JsonUtility.FromJson<Farmer> (farmer_obj).user_id;
		PlayerPrefs.SetInt("fID.txt", 8);
		int fCID = JsonUtility.FromJson<Farmer> (farmer_obj).community_id;
		PlayerPrefs.SetInt("fCID.txt", 12);
		
	}
		
	// Update is called once per frame
	void Update () {
		
	}

	void OnGUI()
	{
		GUI.Window (0, windowRect, WindowFunction, "Login");
	}

	void WindowFunction(int windowID) {

		GUI.skin.textField.fontSize = 18;
		GUI.skin.label.fontSize = 18;

		emailString = GUI.TextField (new Rect (Screen.width / 6, 1 * Screen.height / 5, Screen.width * 2 / 3, Screen.height / 14), emailString, 10);

		nameString = GUI.TextField (new Rect (Screen.width / 6, 2 * Screen.height / 5, Screen.width * 2 / 3, Screen.height / 14), nameString, 10);

		passwordString = GUI.PasswordField (new Rect (Screen.width / 6, 3 * Screen.height / 5, Screen.width * 2/3, Screen.height / 14), passwordString, "*" [0], 10);

		if (GUI.Button (new Rect (Screen.width / 6, 4 * Screen.height / 5, Screen.width *2 / 3, Screen.height / 10), "Log in")) 
		{
			PlayerPrefs.SetInt("userid.txt", userID);

			Application.LoadLevel ("main");
			POST ();

		/*
			WWWForm form = new WWWForm();
			form.AddField("email", emailString);
			form.AddField("name", nameString);
			form.AddField("password", passwordString);
			form.AddField("community_id", 1);
			WWW www = new WWW(realUrl, form);

			StartCoroutine(WaitForRequest(www));

			if (usernameString == u && passwordString == p)
			{
				Debug.Log ("successful input");
			}
			else 
			{
				Debug.Log ("error in input");
			}
			*/
		}
		GUI.Label (new Rect (Screen.width / 6, 12 * Screen.height / 100, Screen.width, Screen.height), "Email");
		GUI.Label (new Rect (Screen.width / 6, 33 * Screen.height / 100, Screen.width, Screen.height), "Name");
		GUI.Label (new Rect (Screen.width / 6, 54 * Screen.height / 100, Screen.width, Screen.height), "Password");
	}
	/*
	IEnumerator WaitForRequest(WWW www)
	{
		yield return www;

		// check for errors
		if (www.error == null)
		{
			Debug.Log("WWW Ok!: " + www.data);
		} else {
			Debug.Log("WWW Error: "+ www.error);
		}    
	}*/

	public WWW POST()
	{
		WWW www;
		Hashtable postHeader = new Hashtable();
		postHeader.Add("Content-Type", "application/json");
		WWWForm form = new WWWForm();
		form.AddField("data", "[\"hi\":3]");
		www = new WWW(realUrl, form);
		StartCoroutine(WaitForRequest(www));
		return www;
	}
	IEnumerator WaitForRequest(WWW data)
	{
		yield return data; // Wait until the download is done
		if (data.error != null)
		{
			Debug.Log("There was an error sending request: " + data.error);
		}
		else
		{
			Debug.Log("WWW Request: " + data.text);
		}
	}

}
