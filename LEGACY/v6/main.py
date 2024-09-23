import logging
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

# Configure logging
logging.basicConfig(level=logging.INFO, format="%(asctime)s - %(message)s")

# Replace with the path to your WebDriver
driver_path = "./chromedriver.exe"
options = webdriver.ChromeOptions()
prefs = {
    "profile.default_content_setting_values.media_stream_camera": 1,
    "profile.default_content_setting_values.media_stream_mic": 1,
    "profile.default_content_setting_values.geolocation": 1,
    "profile.default_content_setting_values.notifications": 1,
}
options.add_experimental_option("prefs", prefs)

# Use headless option to speed up if needed
# options.add_argument("--headless")
driver = webdriver.Chrome(options=options)


def login_snapchat(username, password):
    try:
        logging.info("Opening Snapchat login page")
        driver.get("https://accounts.snapchat.com/accounts/login")

        logging.info("Finding username field and entering username")
        username_input = WebDriverWait(driver, 10).until(
            EC.presence_of_element_located(
                (
                    By.XPATH,
                    "/html/body/div[2]/div/div/div[3]/article/div[1]/div[3]/form/div[1]/input",
                )
            )
        )
        username_input.send_keys("unofficialdxnny")

        logging.info("Finding password field and entering password")
        password_input = WebDriverWait(driver, 10).until(
            EC.presence_of_element_located(
                (
                    By.XPATH,
                    "/html/body/div[2]/div/div/div[3]/article/div/form/div[1]/div/input",
                )
            )
        )
        password_input.send_keys("")

        # Check if 2FA input field exists
        try:
            two_factor_input = WebDriverWait(driver, 5).until(
                EC.presence_of_element_located(
                    (
                        By.XPATH,
                        "/html/body/div[2]/div/div/div[3]/article/div/div[3]/form/div[1]/input",
                    )
                )
            )
            logging.info("2FA input field found. Prompting for 2FA code.")
            two_factor_code = input("Enter 2FA code: ")
            two_factor_input.send_keys(two_factor_code)
        except Exception as e:
            logging.info("No 2FA input field found or encountered an error: %s", str(e))

        logging.info("Submitting the login form")
        login_button = driver.find_element(
            By.XPATH,
            "/html/body/div[2]/div/div/div[3]/article/div/div[4]/form/div[2]/button",
        )
        login_button.click()

    except Exception as e:
        logging.error("An error occurred during login: %s", str(e))


def send_snap():
    try:
        logging.info("Waiting for navigation to Snapchat web interface")
        WebDriverWait(driver, 10).until(EC.url_matches("https://web.snapchat.com"))

        logging.info("Accepting cookies if present")
        try:
            accept_cookies_button = WebDriverWait(driver, 5).until(
                EC.element_to_be_clickable(
                    (
                        By.XPATH,
                        "/html/body/div[2]/div/div/div[4]/div/section/div/div/div[3]/button[2]",
                    )
                )
            )
            accept_cookies_button.click()
        except:
            logging.info("Cookies acceptance button not found or already accepted.")

        logging.info("Clicking on the necessary buttons to navigate to the camera")
        first_button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable(
                (
                    By.XPATH,
                    "/html/body/main/div[1]/div[2]/div/div/div[4]/div[2]/button[1]",
                )
            )
        )
        first_button.click()

        second_button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable(
                (
                    By.XPATH,
                    "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div/div/div/button[1]",
                )
            )
        )
        second_button.click()

        enable_cam_button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable(
                (
                    By.XPATH,
                    "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div[1]/div/div/div[4]/div[2]/button",
                )
            )
        )
        enable_cam_button.click()

        logging.info("Waiting for camera permissions dialog")
        # You need to manually allow camera permissions in the browser

        logging.info("Capturing the snap")
        capture_button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable(
                (
                    By.XPATH,
                    "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div[2]/div/div/div[1]/button[1]",
                )
            )
        )
        capture_button.click()

        logging.info("Clicking send button")
        send_button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable(
                (
                    By.XPATH,
                    "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[2]/div[2]/button[2]",
                )
            )
        )
        send_button.click()

        logging.info("Selecting users to send the snap to")
        user_button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable(
                (
                    By.XPATH,
                    "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[1]/div/form/div/ul/ul/li[3]/div",
                )
            )
        )
        user_button.click()

        logging.info("Sending the snap to selected users")
        final_send_button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable(
                (
                    By.XPATH,
                    "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[1]/div/form/div[2]/button",
                )
            )
        )
        final_send_button.click()

        logging.info("Snap sent successfully!")

    except Exception as e:
        logging.error("An error occurred while sending the snap: %s", str(e))


def main():
    username = "your_username"
    password = "your_password"

    login_snapchat(username, password)
    send_snap()

    # Optionally, repeat sending snaps without logging in again
    # send_snap()

    driver.quit()


if __name__ == "__main__":
    main()
