## Required Libraries
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
from rich.console import Console
import pprint
from rich import print_json

console = Console()

f = open('config.json')
data = json.load(f)






## banner i just nicked from @Quessts
banner = '''
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
  %@@@*                            @@@@*   V4 | Help : snapify help
  &@@@@(                          @@@@@
       @@@@@@@             #@@@@@@@
               @@@#@@(##@@(
     

'''

os.system('cls & title Snapify ~ unofficialdxnny')
Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)

print('')


while True:
    Snapify_input = Write.Input(f"Snapify> ", Col.DynamicMIX((Col.white, Col.yellow)), interval=0).lower()



    if Snapify_input == 'clear':
        os.system('cls')
        Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)

    elif Snapify_input == 'snapify':
        os.system('cls')
        Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)
        Write.Print(f"Snapify Details...", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
        print('')
        print_json(data=data)
        print('')


    elif Snapify_input == 'snapify help':
        os.system('cls')
        Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)
        Write.Print(f"--------------------------------------------------------------------------\n", Col.DynamicMIX((Col.green, Col.green)), interval=0)
        ## Write.Print(f"{driver.capabilities['browserVersion']}\n", Col.DynamicMIX((Col.green, Col.green)), interval=0)
        Write.Print("snapify : Current settings being used for Snapify\n", Col.DynamicMIX((Col.green, Col.green)), interval=0)
        Write.Print("snapify help : List of commands\n", Col.DynamicMIX((Col.white, Col.green)), interval=0)
        Write.Print("snapify score boost : Boost snapscore\n", Col.DynamicMIX((Col.white, Col.green)), interval=0)

        Write.Print(f"--------------------------------------------------------------------------\n", Col.DynamicMIX((Col.green, Col.green)), interval=0)

    elif Snapify_input == 'snapify score boost':

        x = 0

        while True
            os.system('cls')
            Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)
            options = Options()
            options.page_load_strategy = 'eager'
            ## options.headless = headless
            options.add_argument(f"--user-data-dir={data['path_to_user_data']}")
            options.add_argument(f'--profile-directory={data["path_to_chrome"]}')
            options.add_argument('--disable-blink-features=AutomationControlled')
            options.add_argument('--disable-blink-features=AutomationControlled')
            options.add_argument("--log-level=OFF")
            options.add_experimental_option("detach", True)
            options.add_experimental_option('excludeSwitches', ['enable-logging'])
            driver = webdriver.Chrome(options=options) ## Initialise the driver
            ## driver.maximize_window()
            wait = WebDriverWait(driver, 100)
            driver.get("https://web.snapchat.com") ## login to snapchat
            input('Press Enter When Page Ready...')
    
            driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div').click()
            sleep(5)
            driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/div[2]/div/div/div[1]/button[1]').click()
            sleep(5)
            driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/button[2]').click()
            with open('users_path.txt', 'r+') as snap_path:
                lines = snap_path.readlines()
                for line in lines:
                    driver.find_element(By.XPATH, f'{line}').click()
              
            driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/div[3]/button').click()





    elif Snapify_input == 'snapify help':

        os.system('cls')
        Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)
        
        Write.Print(f"--------------------------------------------------------------------------\n", Col.DynamicMIX((Col.green, Col.green)), interval=0)
        Write.Print(f"Snapify Help\n", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
        Write.Print(f"clear : Reset the terminal to its default look\n", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
        Write.Print(f"snapify : Display the clients details\n", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
        Write.Print(f"snapify : Display the clients details\n", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)


        Write.Print(f"--------------------------------------------------------------------------\n", Col.DynamicMIX((Col.green, Col.green)), interval=0)

