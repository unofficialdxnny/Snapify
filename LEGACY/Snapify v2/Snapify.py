## attempted through snapchat website

from pystyle import *
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.chrome.service import Service as ChromeService
from time import sleep
import keyboard as kb
import os
import json

## import functions ## Snapify Functions
from pypresence import Presence
import time


config = open("config.json", "r")
data = json.load(config)

## driver = webdriver.Chrome(service=ChromeService(ChromeDriverManager().install()))


## banner i just nicked from @Quessts
banner = """
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
  %@@@*                            @@@@*   V2 | need help? Join Server : https://discord.gg/8WyFZF3kqn
  &@@@@(                          @@@@@
       @@@@@@@             #@@@@@@@
               @@@#@@(##@@(
     
     [1] Snap XPath
"""

snaps_sent = 0
os.system("cls & title Snapify ~ unofficialdxnny")
Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)


print("")


if kb.read_key(1):

    ## headless = False
    options = Options()
    options.page_load_strategy = "eager"
    ## options.headless = headless
    options.add_argument(f"--user-data-dir={data['path_to_user_data']}")
    options.add_argument("--profile-directory=Default")
    options.add_argument("--disable-blink-features=AutomationControlled")
    options.add_argument("--disable-blink-features=AutomationControlled")
    options.add_argument("--log-level=OFF")
    options.add_experimental_option("detach", True)

    driver = webdriver.Chrome(options=options)  ## Initialise the driver
    driver.get("https://web.snapchat.com")  ## login to snapchat
    ## driver.maximize_window()
    wait = WebDriverWait(driver, 100)

    Write.Print(
        f"Press 'enter' when snapchat has loaded up...",
        Col.DynamicMIX((Col.white, Col.yellow)),
        interval=0,
    )
    ## if kb.read_key('enter'):
    input("")
    while True:
        print(Colorate.Color(Colors.yellow, "Sending Snaps..."))

        driver.find_element(
            By.XPATH,
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/button",
        ).click()
        sleep(5)
        driver.find_element(
            By.XPATH,
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div[2]/button/svg",
        ).click()
        sleep(5)
        driver.find_element(
            By.XPATH,
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[2]/div[2]/button[2]",
        ).click()
        with open("users_path.txt", "r+") as snap_path:
            lines = snap_path.readlines()
            for line in lines:
                driver.find_element(By.XPATH, f"{line}").click()

        driver.find_element(
            By.XPATH,
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[1]/div/form/div[2]/button",
        ).click()
