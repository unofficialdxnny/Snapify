from pystyle import *
from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.chrome.service import Service as ChromeService
from selenium.webdriver.remote.remote_connection import LOGGER
from selenium.common.exceptions import NoSuchElementException

import logging
import os
import json




config = open('config.json', 'r')
data = json.load(config)


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
       @@@@@@@             #@@@@@@@         Commands | Snapify
               @@@#@@(##@@(


"""

LOGGER.setLevel(logging.WARNING)

options = Options()
options.page_load_strategy = 'eager'
options.add_argument(f"--user-data-dir={data['path_to_user_data']}")
options.add_argument(f'--profile-directory={data["path_to_chrome"]}')
options.add_argument('--disable-blink-features=AutomationControlled')
options.add_argument("--log-level=OFF")
options.add_experimental_option("detach", True)

## Use ChromeDriverManager to automatically download and install the latest version of chromedriver

driver = webdriver.Chrome(ChromeDriverManager().install(), options=options)

driver.get("https://web.snapchat.com")  # Login to Snapchat
wait = WebDriverWait(driver, 100)

os.system('cls & title Snapify v5 ~ unofficialdxnny')
Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)



while True:

    try:
        main_input = Write.Input(f"Snapify>", Col.DynamicMIX((Col.white, Col.yellow)), interval=0).lower()

        split = main_input.split()

        null = ''


        if main_input == 'snapify':
            with open('help.txt', 'r') as help:
                line = help.readlines()
                for lines in line:
                    Write.Print(lines, Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
            print('')

        elif main_input == 'snapify reset':
            os.system('cls')
            Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
    

        elif main_input == 'snapify capture':
            capture = driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/div[2]/div/div/div[1]/button[1]')
            capture.click()

        elif main_input == 'snapify send':
            with open('send.txt', 'r') as ppl:
                lines = ppl.readlines()
                sendTo = driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/button[2]')
                for line in lines:
                     send = driver.find_element(By.XPATH, line)
                     send.click()
                
                snap_send = driver.find_element(By.XPATH, '/html/body/main/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/div[3]/div/button')
                snap_send.click()

        elif main_input == null:
            print('')


    except NoSuchElementException as e:
        print("Error: Element not found on webpage. {}".format(str(e)))

  