import sys
import requests

URL = 'https://e5cb6a3b.ngrok.io/users'

client = requests.session()

# Retrieve the CSRF token first
client.get(URL)  # sets cookie
csrftoken = client.cookies['csrf']

login_data = dict(email="nicholasleeyang@gmail.com", name="nicholas", password="password", csrfmiddlewaretoken=csrftoken, next='/')

r = client.post(URL, data=login_data, headers=dict(Referer=URL))
