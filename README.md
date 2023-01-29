# Snapify
The official repository to my Snapify application

**v3**


## Video Tutorial

https://user-images.githubusercontent.com/82535503/215324253-8fa89633-5b99-488d-aaf7-7b8c0de0610a.mp4


![Snapifyv3](https://user-images.githubusercontent.com/82535503/215324658-8590107c-b7ba-458f-be8a-b268b3c6d2de.png)


## Important Files

- Snapify.py
- config.json
- users_path.txt


## How it works

Snapchat detects the chromedriver as a automated process and wont let you login, so to bypass this you need to add your `Chrome Profile` and `Chrome Executable Path`. This will make chromedriver use your `Chrome Profile` to trick Snapchat to think you are a normal user. 


```json

{
    "path_to_chrome": "your_google_chrome_executable_path",
    "path_to_user_data": "C:/Users/your_username/AppData/Local/Google/Chrome/User Data/Default",

}   
```

Now in the `@.txt` file you need to paste in each line the username of your target user. You repeat this for as many users as you want, just dont leave a lines space after  a username as that will cause `Snapify` to crash.