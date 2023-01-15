from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.chrome.service import Service as ChromeService


driver = webdriver.Chrome() ## Initialise the driver
driver.get("https://accounts.snapchat.com/accounts/login") ## login to snapchat
driver.maximize_window()
wait = WebDriverWait(driver, 100)

while True:
    if driver.current_url == 'web.snapchat.com':
        #print(Colorate.Color(Colors.yellow, 'Sending Snaps...'))
        driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div').click()
        driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/div[2]/div/div/div[1]/button[1]').click()
        driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/button[2]').click()
        with open('user_path.txt', 'r+') as snap_path:
            lines = snap_path.readlines()
            for line in lines:
                driver.find_element(By.XPATH, f'{line}').click()
                driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/div[3]/button').click()
