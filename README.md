# Snapify

```
    %(                              #%
    %###                          ###%
    %%%%#####  @@@/@@@/@@@, #####%##%       ███████╗███╗   ██╗ █████╗ ██████╗ ██╗███████╗██╗   ██╗
     %&%%%#%&@              @&%%#%%&%       ██╔════╝████╗  ██║██╔══██╗██╔══██╗██║██╔════╝╚██╗ ██╔╝
        %&&%                 %%%&%          ███████╗██╔██╗ ██║███████║██████╔╝██║█████╗   ╚████╔╝
          @@                  @%            ╚════██║██║╚██╗██║██╔══██║██╔═══╝ ██║██╔══╝    ╚██╔╝
          @@                  @&            ███████║██║ ╚████║██║  ██║██║     ██║██║        ██║
      *@/ @@                  @* @@         ╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝        ╚═╝
     ,@@                         &@@                                                            
          /                   @@           #1 Free Snapchat booster.
         @@                    @%          Developed by @unofficialdxnny
       @@                       &@#        
  %@@@*                            @@@@*   V8 | need help? Join Server : https://discord.gg/7HnSE6Jsam
  &@@@@(                          @@@@@     
       @@@@@@@             #@@@@@@@
               @@@#@@(##@@(
```
<p align="left">
<img align="right" src="https://imgur.com/ixoqGXc.png" width=315 height=500>

This project is going to slowly go back to Open Source! I'm working on more updates and docs.
Simple Rules! 

- Don't be a SKID
- Don't fkin sell this to some kid (it's free and not yours, so have some decency!).
- Skids get shown right at the top of the repository
</p>




## Features

- **Enable Camera**: Automatically click the button to enable the camera.
- **Create Snap**: Click the button to make a snap.
- **Send To Friends**: Select friends from a predefined list of XPaths.
- **Send Button**: Click the send button to send your snap.

## Instructions for Use

### 1. Setting Up the Script
- Open the Snapchat web version in your browser.
- Open the **Developer Tools** (`Ctrl+Shift+I` on Windows or `Cmd+Opt+I` on Mac).
- Navigate to the **Console** tab.

### 2. Modifying the Script
- Copy the Snapify script provided below and paste it into the console.
- Update the `xpaths` array with the XPaths relevant to your Snapchat interface.

### 3. Gathering XPaths
To collect the XPaths for elements on the Snapchat interface:

1. In the **Elements** tab of Developer Tools, right-click on the desired element (e.g., buttons for camera, making a snap, sending).
   
   <img src="https://imgur.com/bh2JjgF.png" width=300>
   
2. Select **Copy** > **Copy XPath**.

   <img src="https://imgur.com/1SDPzHl.png" width=300>

3. Paste the copied XPath below the `// Add more XPaths for friends here` comment in the script.

### 4. Running the Script
- After updating the XPaths, run the script in the console.
- The script will continuously attempt to click the specified elements every second.

### 5. Example XPaths
The default XPaths included in the script are as follows:
<img align="left" src="https://imgur.com/GEt4ush.png" width=315 height=500>
```javascript
const xpaths = [
    '/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div/div/div/button[1]', // Enable camera
    '/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div[2]/div[2]/div/div[1]/button[1]', // Capture snap
    '/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[2]/div[2]/button[2]', // Send to
    // Add more XPaths for friends here
    '/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[1]/div/form/div[2]/button' // Send button
];


```


## License

This project is licensed under the [MIT License](LICENCE).
