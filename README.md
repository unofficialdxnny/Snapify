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


## 🚀 About

**Snapify Pro** is a free, open-source Snapchat score booster that uses `adb`, `OpenCV`, and automation techniques to interact with your Android device and send snaps automatically using visual detection.

> **Disclaimer**: This tool is for educational and personal use only. Don’t be a SKID — don’t resell or rebrand this project. All misuse is your responsibility.

---

## 🧠 Features

- 📸 **Screen Capture in Memory** – Uses `adb exec-out screencap` with OpenCV for image processing.
- 🔍 **Template Matching** – Locates UI elements using high-confidence grayscale template matching.
- 🤖 **Auto Tap** – Automatically taps detected areas on the screen.
- 🧼 **Auto Recovery** – Detects errors and presses the Android back button to recover.
- 📱 **Multi-Device Support** – Works with multiple connected devices via ADB.

---

## 🛠 Requirements

- Python 3.8+
- Android device with ADB enabled
- `adb` installed and in your system PATH
- Python packages:
  - `opencv-python`
  - `numpy`
  - `colorama`

Install dependencies:

```bash
pip install -r requirements.txt
```
## ⚙️ How to Use

### 1. Connect Your Device
- Enable **USB Debugging** on your Android phone.
- Connect your phone to your PC via USB and **allow ADB permissions**.
- Run the script — it will search for connected ADB devices automatically.

### 2. Prepare Your Templates
- Capture a screenshot of the UI element you want to click.
- Crop the desired region (e.g., **Snap button**) and save it as a **PNG** file (**grayscale preferred**).
- Load it in the script and assign a name.

> ✅ **Note:** Image assets for **Snapchat Light Mode** are already included.  
> You only need to provide custom templates if you're using **Dark Mode**.

## 📄 License
This project is licensed under the **MIT License**.  
You are free to use, modify, and share it, but you may **not sell it** or **claim it as your own**.

---

## 🧠 Community Rules
- Don’t be a **SKID**.  
- Don’t sell this. It’s **free**.  
- Skids will be **publicly listed** at the top of the repo.

---

## 💬 Support
Need help or want to show support?  
**Join the Snapify Discord:** [https://discord.gg/7HnSE6Jsam](https://discord.gg/7HnSE6Jsam)

---

**Made with ❤️ by [@unofficialdxnny](https://github.com/unofficialdxnny)**
