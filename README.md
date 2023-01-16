# Snapify
Boost Snapchat Score While working on something else.

![Snapify](https://user-images.githubusercontent.com/82535503/212598383-335c74a0-3a99-4cf3-9930-4f17999a29b8.png)


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

Now in the `users_path` file you need to paste in each line the xpath to your user. To do this go to <a href="https://web.snapchat.com/">Snapchat Web</a> make a snap and press `send`. make sure you dont search the usernames but infact scroll down in the given list until you find it. Right click that user than click inspect. Hover over to the highlighted element and once again right click and move to copy. here a list will become visible you need to click `copy xpath` options than paste it into the `text file`. You repeat this for as many users as you want, just dont leave a space inbetween the paths as that will cause `Snapify` to crash.


### Visual Guide

head over to <a href="https://web.snapchat.com/">Snapchat Web</a>

