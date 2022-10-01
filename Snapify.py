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

username = getpass.getuser()

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
driver = webdriver.Chrome(options=options, service_args=["--verbose", "--log-path=D:\\qc1.log"]) ## Initialise the driver
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
     print(Colorate.Color(Colors.yellow, 'Login to Snapchat'))


if driver.current_url == 'https://accounts.snapchat.com/accounts/welcome':
     print(Colorate.Color(Colors.yellow, 'Select "Snapchat Web"'))
     sleep(2)
     os.system('cls')
     Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)


enable_camera = wait.until(EC.presence_of_element_located((By.CLASS_NAME, "mBiMV")))
enable_camera.click()
while True:
     if 'verify?' in driver.current_url:
          print(Colorate.Color(Colors.yellow, 'Verify Login Attempt Via Your Phone.'))
          sleep(2)
          os.system('cls')
          Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
          ## options.headless = {headless}

     
     elif driver.current_url == 'https://web.snapchat.com/':
          Write.Print(f"Accept Camera Perms Please...", Colors.yellow, interval=0)
          os.system('cls')
          Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
          print(Colorate.Color(Colors.yellow, f'Snaps Sent : {snaps_sent}'))
          sleep(2)
          lines = data["lines_in_users_path"]
          os.system('cls')
          Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
          sleep(2)
          ## enable_camera = wait.until(EC.presence_of_element_located((By.CLASS_NAME, "mBiMV")))
          ## enable_camera.click()
          sleep(2)
          photo = wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/div[2]/div/div/div[1]/button[1]')))          
          photo.click()
          sleep(2)
          send_to = wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/button[2]')))
          send_to.click()

          with open(f'users_path.txt', 'r') as users:
               lines = users.readlines()
               for line in lines:
                    user_select = wait.until(EC.presence_of_element_located((By.XPATH, f'{line}')))
                    user_select.click()
               
               send = wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/div[4]/button')))
               send.click()
               snaps_sent = snaps_sent+data["lines_in_users_path"]
          

               driver.minimize_window
