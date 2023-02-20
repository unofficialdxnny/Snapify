# Snapify
Boost Snapchat Score While working on something else.


## Video Tutorial

https://user-images.githubusercontent.com/82535503/215324253-8fa89633-5b99-488d-aaf7-7b8c0de0610a.mp4



![Snapify](https://user-images.githubusercontent.com/82535503/212598383-335c74a0-3a99-4cf3-9930-4f17999a29b8.png)





## Important Files

- `Snapify.py`
- `config.json`
- `@.txt`


## How it works

Snapchat detects the chromedriver as a automated process and wont let you login, so to bypass this you need to add your `Chrome Profile` and `Chrome Executable Path`. This will make chromedriver use your `Chrome Profile` to trick Snapchat to think you are a normal user. 


```json

{
    "path_to_chrome": "your_google_chrome_executable_path",
    "path_to_user_data": "C:/Users/your_username/AppData/Local/Google/Chrome/User Data/Default",

}   
```

Now in the `@.txt` file you need to type the username of each user to Snap. Thats it!!!.

