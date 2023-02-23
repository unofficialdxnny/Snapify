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
  %@@@*                            @@@@*   V4 | need help? Join Server : https://discord.gg/8WyFZF3kqn
  &@@@@(                          @@@@@
       @@@@@@@             #@@@@@@@
               @@@#@@(##@@(
     

'''


os.system('cls & title Snapify ~ unofficialdxnny')
Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)) 
, interval=0)

print('')


try:
    while True:
        Snapify_input = Write.Input(f"Snapify> ", Col.DynamicMIX((Col.white, Col.yellow)), interval=0).lower()

        if Snapify_input == 'clear':
            os.system('cls')
            Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)

        elif Snapify_input == 'snapify':
            Write.Print(f"Snapify Details...", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)
            print('')
            print_json(data=data)
            print('')   

            
            

        
        else:
            os.system('cls')
            Write.Print(f"{banner}", Col.DynamicMIX((Col.white, Col.yellow)), interval=0)



        

except Exception as e:
    print('')