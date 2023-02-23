# Snapify
Boost Snapchat Score While working on something else.


## Video Tutorial


<a href="https://www.youtube.com/watch?v=8zqsrlOX6Gw"><img src="https://user-images.githubusercontent.com/82535503/220074013-892ed57c-b435-46a5-9fc5-e2ff86e4fabc.png"></a>    






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

