## attempted through snapchat website

from pystyle import *
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.chrome.service import Service as ChromeService
from time import sleep

import os
import json


config = open(f'config.json')
data = json.load(config)



## driver = webdriver.Chrome(service=ChromeService(ChromeDriverManager().install()))




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
  %@@@*                            @@@@*   V2 | need help? @unofficialdxnny#8301
  &@@@@(                          @@@@@
       @@@@@@@             #@@@@@@@
               @@@#@@(##@@(


     [1] Snap Everyone
     [2] Snap XPath
'''

snaps_sent = 0
os.system('cls & title Snapify ~ unofficialdxnny')
Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)




## headless = False
options = Options()
options.page_load_strategy = 'eager'
## options.headless = headless
options.add_argument(f"--user-data-dir={data['path_to_user_data']}")
options.add_argument(f'--profile-directory={data["path_to_chrome"]}')
options.add_argument('--disable-blink-features=AutomationControlled')
options.add_argument('--disable-blink-features=AutomationControlled')
options.add_argument("--log-level=3")
driver = webdriver.Chrome(options=options) ## Initialise the driver
driver.get("https://accounts.snapchat.com/accounts/login") ## login to snapchat
## driver.maximize_window()
wait = WebDriverWait(driver, 100)


     
## if driver.current_url == 'https://accounts.snapchat.com/accounts/verify?continue=%2Faccounts%2Fsso%3Fclient_id%3Dweb-calling-corp--prod%26referrer%3Dhttps%253A%252F%252Fweb.snapchat.com%252F&transactionId=dc300f02-f759-4602-aa64-2854842f1237':
##      print(Colorate.Color(Colors.yellow, 'Using Your Phone Verify Your Login.'))
## 
## wait.until(EC.url_to_be('https://web.snapchat.com/'))
## print(Colorate.Color(Colors.yellow, 'Follow On Screen Instructions.'))
## print(Colorate.Color(Colors.yellow, 'When URL : https://accounts.snapchat.com/accounts/welcome Opens click on "Snapchat Web"'))
## wait.until(EC.url_to_be('https://web.snapchat.com/'))
## 
## print(Colorate.Color(Colors.yellow, 'Snapchat Web Opened.'))
## 
## 

## def login():
##      print(Colorate.Color(Colors.yellow, 'Logging In...'))
##      user_name = wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="username"]')))
##      user_name.click()
##      user_name.send_keys(data["username"])
##      
##      pass_word = wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="password"]')))
##      pass_word.click()
##      pass_word.send_keys(data["password"])
##      sleep(5)
##      log_in = wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="loginTrigger"]')))
##      log_in.click()
## 
## login()

if driver.current_url == 'https://accounts.snapchat.com/accounts/login':
     print(Colorate.Color(Colors.yellow, 'LogingIn To Snapchat Web...'))
