from time import sleep
from pystyle import *



def login():
    sleep(5)
    print(Colorate.Color(Colors.yellow, 'LogingIn To Snapchat Web...'))
    sleep(1)
    driver.find_element(By.XPATH, '//*[@id="username"]').send_keys(data["username"])
    sleep(1)
    driver.find_element(By.XPATH, '//*[@id="password"]').send_keys(data["password"])
    sleep(1)
    driver.find_element(By.XPATH, '//*[@id="loginTrigger"]').click()


def verify():
    print(Colorate.Color(Colors.yellow, 'Check Snapchat on Phone...'))


def snap():
    driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div').click()
    driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/div[2]/div/div/div[1]/button[1]').click()
    driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div/button[2]').click()
    with open('user_path.txt', 'r+') as snap_path:
        lines = snap_path.readlines()
        for line in lines:
            driver.find_element(By.XPATH, f'{line}').click()
            driver.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/div[3]/button').click()


    