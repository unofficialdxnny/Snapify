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


client_id = '1234567890'  # Fake ID, put your real one here
RPC = Presence(client_id)  # Initialize the client class
RPC.connect() # Start the handshake loop

start_time=time.time() 


RPC.update(state="Boosting SnapScore", details="By unofficialdxnny", large_image="new_project", buttons=[{"label": "PloitZ Server", "url": ""}], start=start_time)



config = open('config.json', 'r')
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
  %@@@*                            @@@@*   V3 | need help? Join Server : https://discord.gg/8WyFZF3kqn
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
options.add_argument("--log-level=OFF")
options.add_experimental_option("detach", True)
options.add_experimental_option('excludeSwitches', ['enable-logging'])

driver = webdriver.Chrome(options=options) ## Initialise the driver
driver.get("https://web.snapchat.com") ## login to snapchat
## driver.maximize_window()
wait = WebDriverWait(driver, 100)


Write.Print(f"Press Enter Key When web.snapchat.com is loaded...", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)
input('')


driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div').click() ## enable camera

while True:
     sleep(2)
     driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/div[2]/div/div/div[1]/button[1]').click() ## capture
     sleep(2)
     driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/button[2]').click() ## sendto

     driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/div[2]/div/div/div/input').click() ## searchbar

     with open('@.txt', 'r+') as users:
          lines = users.readlines()
          for line in lines:
               driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/div[2]/div/div/div/input').send_keys('') ## searchbar
               driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/ul/li[2]/div').click()


     driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/div[3]/button').click()


