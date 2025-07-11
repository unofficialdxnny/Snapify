import os
import sys
import time
import getpass
import json
from colorama import Fore, Style, init
import readchar
import subprocess

# Initialize Colorama
init(autoreset=True)

# --- Dependency Imports ---
# We import these here so they are ready when needed.
try:
    from selenium import webdriver
    from selenium.webdriver.common.by import By
    from selenium.webdriver.support.ui import WebDriverWait
    from selenium.webdriver.support import expected_conditions as EC
    from selenium.common.exceptions import TimeoutException, NoSuchElementException, ElementClickInterceptedException
    from selenium.webdriver.chrome.service import Service
    from selenium.webdriver.chrome.options import Options
    from webdriver_manager.chrome import ChromeDriverManager
    import requests
except ImportError:
    print("A required library is not found. Please install it:")
    print("pip install selenium webdriver-manager requests")
    sys.exit(1)


banner = """

    %(                              #%
    %###                          ###%
    %%%%#####  @@@/@@@/@@@, #####%##%       ███████╗███╗   ██╗ █████╗ ██████╗ ██╗███████╗██╗   ██╗
     %&%%%#%@              @&%%#%%&%       ██╔════╝████╗  ██║██╔══██╗██╔══██╗██║██╔════╝╚██╗ ██╔╝
        %&&%                 %%%&%          ███████╗██╔██╗ ██║███████║██████╔╝██║█████╗   ╚████╔╝
          @@                  @%            ╚════██║██║╚██╗██║██╔══██║██╔═╝   ██║██╔╝      ╚██╔╝
          @@                  @&            ███████║██║ ╚████║██║  ██║██║     ██║██║        ██║
      *@/ @@                  @* @@         ╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝        ╚═╝
     ,@@                         &@@
          /                   @@           #1 Free Snapchat booster.
         @@                    @%          Developed by @unofficialdxnny
       @@                       &@#
  %@@@* @@@@*.   V9 | need help? Join Server : https://discord.gg/7HnSE6Jsam
  &@@@@(                          @@@@@
       @@@@@@@             #@@@@@@@
               @@@#@@(##@@(

               """

def clear_screen():
    """Clears the terminal screen."""
    os.system('cls' if os.name == 'nt' else 'clear')

def print_menu(menu_options, selected_option_index):
    """Prints the menu with the selected option highlighted."""
    for i, option in enumerate(menu_options):
        if i == selected_option_index:
            print(f"{Fore.CYAN}{Style.BRIGHT}> {option}{Style.RESET_ALL}") # Highlight selected option
        else:
            print(f"  {option}")

def show_loading_animation(message, duration=3):
    """Plays a simple loading animation."""
    animation_frames = ["|", "/", "-", "\\"]
    start_time = time.time()
    i = 0
    while time.time() - start_time < duration:
        sys.stdout.write(f"\r{Fore.GREEN}{message} {animation_frames[i % len(animation_frames)]}{Style.RESET_ALL}")
        sys.stdout.flush()
        time.sleep(0.1)
        i += 1
    sys.stdout.write("\r" + " " * (len(message) + 5) + "\r") # Clear the loading line
    sys.stdout.flush()

def get_persistent_profile_path():
    """
    Gets a persistent, dedicated profile path for this script to use.
    This avoids conflicts with the user's main Chrome instance.
    Returns the path to the user data directory.
    """
    base_path = ""
    if sys.platform == "win32":
        base_path = os.path.join(os.environ['LOCALAPPDATA'], "Google", "Chrome", "User Data")
    elif sys.platform == "darwin":
        base_path = os.path.join(os.path.expanduser("~"), "Library", "Application Support", "Google", "Chrome")
    elif sys.platform.startswith("linux"):
        base_path = os.path.join(os.path.expanduser("~"), ".config", "google-chrome")
    if not base_path:
        raise OSError("Unsupported operating system for Chrome profile path.")
    persistent_profile_path = os.path.join(os.path.dirname(base_path), "Snapify")
    return persistent_profile_path

def setup_profile_picture(user_data_dir):
    """Downloads and sets a custom avatar for the Chrome profile."""
    profile_path = os.path.join(user_data_dir, "Default")
    os.makedirs(profile_path, exist_ok=True)
    avatar_path = os.path.join(profile_path, "SnapifyAvatar.png")
    preferences_path = os.path.join(profile_path, "Preferences")
    if not os.path.exists(avatar_path):
        try:
            print(f"{Fore.WHITE}Downloading profile avatar...{Style.RESET_ALL}")
            avatar_url = "https://placehold.co/256x256/7e22ce/ffffff?text=S"
            response = requests.get(avatar_url, stream=True)
            if response.status_code == 200:
                with open(avatar_path, 'wb') as f:
                    f.write(response.content)
        except Exception as e:
            print(f"{Fore.RED}Error downloading avatar: {e}{Style.RESET_ALL}")
    if os.path.exists(preferences_path):
        try:
            with open(preferences_path, 'r', encoding='utf-8') as f:
                prefs = json.load(f)
            prefs.setdefault('profile', {}).setdefault('info_cache', {}).setdefault('Default', {})
            prefs['profile']['info_cache']['Default']['gaia_picture_file_name'] = "SnapifyAvatar.png"
            prefs['profile']['info_cache']['Default']['use_gaia_picture'] = True
            prefs.setdefault('profile', {})['avatar_icon'] = f"chrome://profile-avatar/{len(prefs['profile'].get('info_cache', {})) -1}"
            with open(preferences_path, 'w', encoding='utf-8') as f:
                json.dump(prefs, f, indent=4)
        except (json.JSONDecodeError, IOError, KeyError) as e:
            print(f"{Fore.YELLOW}Could not modify preferences for avatar, will try again on next run. Error: {e}{Style.RESET_ALL}")

def interactive_menu(options, title=" Use ↑↓ to navigate, Enter to select "):
    """Displays an interactive menu navigable with arrow keys."""
    selected_option_index = 0
    while True:
        clear_screen()
        print(Fore.YELLOW + Style.BRIGHT + banner + Style.RESET_ALL)
        print("\n" + "="*len(title))
        print(title.center(len(title)))
        print("="*len(title) + "\n")
        print_menu(options, selected_option_index)
        key = readchar.readkey()
        if key == readchar.key.UP:
            selected_option_index = (selected_option_index - 1 + len(options)) % len(options)
        elif key == readchar.key.DOWN:
            selected_option_index = (selected_option_index + 1) % len(options)
        elif key == readchar.key.ENTER:
            break
        elif key == readchar.key.ESC:
            return None # Allow escaping the menu
    return options[selected_option_index]

if __name__ == "__main__":
    menu_options = ["Chrome Web Driver", "Android Debug Bridge"]
    while True:
        chosen_option = interactive_menu(menu_options)
        
        clear_screen()
        print(Fore.YELLOW + Style.BRIGHT + banner + Style.RESET_ALL)

        if chosen_option == "Chrome Web Driver":
            driver = None
            show_loading_animation("Initializing Chrome Web Driver", duration=2)
            try:
                profile_user_data_dir = get_persistent_profile_path()
                print(f"{Fore.CYAN}Using dedicated profile in: {profile_user_data_dir}{Style.RESET_ALL}")
                setup_profile_picture(profile_user_data_dir)
                time.sleep(1)

                print(f"{Fore.WHITE}Setting up Chrome options...{Style.RESET_ALL}")
                chrome_options = Options()
                chrome_options.add_argument(f"--user-data-dir={profile_user_data_dir}")
                chrome_options.add_argument("--profile-directory=Default")
                chrome_options.add_experimental_option("excludeSwitches", ["enable-automation"])
                chrome_options.add_experimental_option('useAutomationExtension', False)
                time.sleep(1)

                print(f"{Fore.WHITE}Checking for Chrome Driver...{Style.RESET_ALL}")
                service = Service(ChromeDriverManager().install())
                
                print(f"{Fore.GREEN}Launching Chrome with dedicated profile...{Style.RESET_ALL}")
                driver = webdriver.Chrome(service=service, options=chrome_options)
                driver.get("https://web.snapchat.com/")

                print(f"\n{Fore.CYAN}{Style.BRIGHT}ACTION REQUIRED: Please log in to Snapchat in the browser window.{Style.RESET_ALL}")
                input(f"{Fore.WHITE}Once you are logged in, press Enter in this terminal to continue...{Style.RESET_ALL}")
                
                print(f"\n{Fore.GREEN}Starting endless click loop... Press Ctrl+C in the terminal to stop.{Style.RESET_ALL}")
                
                wait = WebDriverWait(driver, 0.5)
                
                while True:
                    try:
                        # 1. Click Camera Icon (to reset view)
                        try:
                            camera_button = wait.until(EC.element_to_be_clickable((By.CSS_SELECTOR, "button[aria-label='Camera']")))
                            camera_button.click()
                            print(f"{Fore.MAGENTA}- Clicked Camera Icon to reset view{Style.RESET_ALL}")
                        except:
                            pass

                        # 2. Click Shutter Button
                        try:
                            shutter_button = wait.until(EC.element_to_be_clickable((By.CLASS_NAME, "qJKfS")))
                            shutter_button.click()
                            print(f"{Fore.CYAN}- Clicked Shutter Button{Style.RESET_ALL}")
                        except:
                            pass
                        
                        # 3. Click "Send To" Button
                        try:
                            send_to_button = wait.until(EC.element_to_be_clickable((By.CSS_SELECTOR, "button[aria-label='Send To']")))
                            send_to_button.click()
                            print(f"{Fore.CYAN}- Clicked 'Send To' Button{Style.RESET_ALL}")
                        except:
                            pass
                        
                        # 4. Click all recipients
                        try:
                            recipients = driver.find_elements(By.CLASS_NAME, "Ewflr")
                            if recipients:
                                print(f"{Fore.YELLOW}- Found {len(recipients)} recipients, clicking them...{Style.RESET_ALL}")
                                for r in recipients:
                                    try:
                                        r.click()
                                    except:
                                        pass
                        except:
                            pass

                        # 5. Click Final Send Button
                        try:
                            final_send_button = wait.until(EC.element_to_be_clickable((By.XPATH, "//button[span[text()='Send']]")))
                            final_send_button.click()
                            print(f"{Fore.GREEN}- Clicked Final Send Button! Snap sent.{Style.RESET_ALL}")
                        except:
                            pass
                        
                        time.sleep(0.5)

                    except KeyboardInterrupt:
                        print("\nStopping loop...")
                        break

            except KeyboardInterrupt:
                print(f"\n\n{Fore.YELLOW}User stopped the script. Exiting.{Style.RESET_ALL}")
            except Exception as e:
                print(f"\n{Fore.RED}{Style.BRIGHT}An error occurred:{Style.RESET_ALL}")
                print(f"{Fore.RED}{e}")
                print(f"\n{Fore.YELLOW}Please ensure Google Chrome is installed and not running with the same profile.{Style.RESET_ALL}")
            finally:
                print("\nPress any key to close the browser and return to the main menu...")
                readchar.readkey()
                if driver:
                    driver.quit()

        elif chosen_option == "Android Debug Bridge":
            script_dir = os.path.dirname(os.path.realpath(__file__))
            platform_tools_dir = os.path.join(script_dir, "platform-tools")
            adb_path = os.path.join(platform_tools_dir, "adb.exe" if sys.platform == "win32" else "adb")

            if not os.path.exists(adb_path):
                print(f"{Fore.RED}Error: 'adb' executable not found in '{platform_tools_dir}'.{Style.RESET_ALL}")
            else:
                print(f"{Fore.WHITE}Checking for connected devices using ADB...{Style.RESET_ALL}")
                result = subprocess.run([adb_path, "devices"], capture_output=True, text=True, check=False)
                devices = result.stdout.strip().split('\n')[1:]

                if not devices or not any("device" in d for d in devices):
                    print(f"{Fore.RED}No authorized device found.{Style.RESET_ALL}")
                    print(f"{Fore.YELLOW}Please ensure your phone is connected, USB Debugging is enabled,")
                    print(f"{Fore.YELLOW}and you have authorized the connection on your phone's screen.{Style.RESET_ALL}")
                else:
                    print(f"{Fore.GREEN}Device found! Launching Snapchat...{Style.RESET_ALL}")
                    package_name = "com.snapchat.android"
                    activity_name = "com.snapchat.android.LandingPageActivity"
                    launch_command = [adb_path, "shell", "am", "start", "-n", f"{package_name}/{activity_name}"]
                    launch_result = subprocess.run(launch_command, capture_output=True, text=True, check=False)

                    if "Error" in launch_result.stderr:
                        print(f"{Fore.RED}Failed to launch Snapchat: {launch_result.stderr.strip()}{Style.RESET_ALL}")
                    else:
                        print(f"{Fore.GREEN}✔ Snapchat launched successfully!{Style.RESET_ALL}")
                        time.sleep(3) 

                        # --- ACTIONS START DIRECTLY ---
                        print(f"\n{Fore.WHITE}Tapping the in-app capture button...{Style.RESET_ALL}")
                        capture_coords = ["1160", "2910"]
                        capture_command = [adb_path, "shell", "input", "tap"] + capture_coords
                        subprocess.run(capture_command, check=False)
                        print(f"{Fore.GREEN}✔ Sent capture tap command!{Style.RESET_ALL}")
                        
                        print(f"{Fore.WHITE}Waiting for preview screen...{Style.RESET_ALL}")
                        time.sleep(2)

                        print(f"{Fore.WHITE}Tapping the 'Send To' button...{Style.RESET_ALL}")
                        send_to_coords = ["1171", "2921"]
                        send_to_command = [adb_path, "shell", "input", "tap"] + send_to_coords
                        subprocess.run(send_to_command, check=False)
                        print(f"{Fore.GREEN}✔ Sent 'Send To' tap command!{Style.RESET_ALL}")

            print("\nPress any key to return to the main menu...")
            readchar.readkey()