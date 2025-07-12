import os
import sys
import time
import subprocess
from colorama import Fore, Style, init
import cv2
import numpy as np

# Initialize Colorama for colored terminal output
init(autoreset=True)

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
  %@@@*                           @@@@*.   Pro | need help? Join Server : https://discord.gg/7HnSE6Jsam
  &@@@@(                          @@@@@
       @@@@@@@             #@@@@@@@
               @@@#@@(##@@(

               """

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def take_screenshot(adb_path, device_id, local_path):
    try:
        result = subprocess.run(
            [adb_path, "-s", device_id, "exec-out", "screencap", "-p"],
            capture_output=True, check=True
        )
        with open(local_path, 'wb') as f:
            f.write(result.stdout)
        return True
    except subprocess.CalledProcessError as e:
        print(f"{Fore.RED}[ERROR] Failed to take screenshot: {e.stderr}{Style.RESET_ALL}")
        return False
    except FileNotFoundError:
        print(f"{Fore.RED}[CRITICAL ERROR] 'adb' not found at '{adb_path}'.{Style.RESET_ALL}")
        return False

def find_and_click_image(adb_path, device_id, template_image_path, data_dir, confidence_threshold=0.85):
    screen_path = os.path.join(data_dir, "current_screen.png")
    if not take_screenshot(adb_path, device_id, screen_path):
        return False

    try:
        screen = cv2.imread(screen_path, cv2.IMREAD_GRAYSCALE)
        template = cv2.imread(template_image_path, cv2.IMREAD_GRAYSCALE)
        if screen is None or template is None:
            print(f"{Fore.RED}[OpenCV ERROR] Could not read an image file (screen or template).{Style.RESET_ALL}")
            if os.path.exists(screen_path): os.remove(screen_path)
            return False
    except Exception as e:
        print(f"{Fore.RED}[OpenCV ERROR] An exception occurred: {e}{Style.RESET_ALL}")
        if os.path.exists(screen_path): os.remove(screen_path)
        return False

    result = cv2.matchTemplate(screen, template, cv2.TM_CCOEFF_NORMED)
    _, max_val, _, max_loc = cv2.minMaxLoc(result)

    if max_val >= confidence_threshold:
        template_height, template_width = template.shape
        center_x = max_loc[0] + template_width // 2
        center_y = max_loc[1] + template_height // 2
        
        print(f"{Fore.GREEN}✔ Found '{os.path.basename(template_image_path)}' (Conf: {max_val:.2f}). Clicking...{Style.RESET_ALL}")
        subprocess.run([adb_path, "-s", device_id, "shell", "input", "tap", str(center_x), str(center_y)], capture_output=True)
        os.remove(screen_path)
        return True
    else:
        os.remove(screen_path)
        return False

def press_back_button(adb_path, device_id, times=1):
    print(f"{Fore.YELLOW}Attempting to recover by pressing the back button {times} time(s)...{Style.RESET_ALL}")
    for _ in range(times):
        subprocess.run([adb_path, "-s", device_id, "shell", "input", "keyevent", "4"], capture_output=True)
        time.sleep(0.5)

def find_and_click_with_retry(adb_path, device_id, image_path, data_dir, retries=5, delay=1.5):
    for i in range(retries):
        if find_and_click_image(adb_path, device_id, image_path, data_dir):
            return True
        print(f"  -> '{os.path.basename(image_path)}' not found. Retrying ({i+1}/{retries})...")
        time.sleep(delay)
    return False

def find_and_connect_device(adb_path):
    print(f"{Fore.WHITE}--- ADB Device Connection ---{Style.RESET_ALL}")
    while True:
        try:
            result = subprocess.run([adb_path, "devices"], capture_output=True, text=True, check=True)
            devices = result.stdout.strip().split('\n')[1:]
            authorized_devices = []
            if not devices or not any(d.strip() for d in devices):
                print(f"\r{Fore.YELLOW}[WAITING] No devices detected. Please connect your phone...", end="")
            else:
                for device_line in devices:
                    if device_line.strip():
                        parts = device_line.split('\t')
                        if parts[1] == 'device':
                            authorized_devices.append(parts[0])
                if authorized_devices:
                    device_id = authorized_devices[0]
                    sys.stdout.write("\r" + " " * 80 + "\r")
                    sys.stdout.flush()
                    print(f"{Fore.GREEN}✔ [CONNECTED] Connected to device: {device_id}{Style.RESET_ALL}")
                    return device_id
                else:
                    print(f"\r{Fore.RED}[ACTION REQUIRED] Device unauthorized. Please allow USB Debugging on your phone.", end="")
        except Exception:
            return None
        time.sleep(2)

def launch_snapchat(adb_path, device_id):
    print(f"\n{Fore.WHITE}Attempting to launch Snapchat...{Style.RESET_ALL}")
    package_name = "com.snapchat.android"
    activity_name = "com.snapchat.android.LandingPageActivity"
    try:
        subprocess.run([adb_path, "-s", device_id, "shell", "am", "start", "-n", f"{package_name}/{activity_name}"], check=True, capture_output=True)
        print(f"{Fore.GREEN}✔ Snapchat launched successfully! Waiting for app to load...{Style.RESET_ALL}")
        time.sleep(5)
        return True
    except subprocess.CalledProcessError as e:
        print(f"{Fore.RED}Failed to launch Snapchat: {e.stderr.decode()}{Style.RESET_ALL}")
        return False

def main():
    clear_screen()
    print(Fore.YELLOW + Style.BRIGHT + banner)
    
    script_dir = os.path.dirname(os.path.realpath(sys.argv[0]))
    platform_tools_dir = os.path.join(script_dir, "platform-tools")
    adb_path = os.path.join(platform_tools_dir, "adb.exe" if sys.platform == "win32" else "adb")
    data_dir = os.path.join(script_dir, "data")
    
    required_images = {
        "capture": os.path.join(data_dir, "capture_button.png"),
        "send_to": os.path.join(data_dir, "send_to_button.png"),
        "your_story": os.path.join(data_dir, "your_story_button.png"),
        "final_send": os.path.join(data_dir, "final_send_button.png")
    }

    if not os.path.exists(adb_path):
        print(f"{Fore.RED}CRITICAL ERROR: 'adb' executable not found.{Style.RESET_ALL}")
        input("\nPress Enter to exit.")
        return

    all_files_found = True
    print(f"{Fore.WHITE}--- Checking for required image files ---{Style.RESET_ALL}")
    for name, path in required_images.items():
        if os.path.exists(path):
            print(f"{Fore.GREEN}✔ Found: {os.path.basename(path)}")
        else:
            print(f"{Fore.RED}✖ Missing: {os.path.basename(path)}")
            all_files_found = False

    device_id = find_and_connect_device(adb_path)
    
    if device_id:
        if not all_files_found:
            print(f"\n{Fore.RED}One or more image files are missing. Please run the initial setup.{Style.RESET_ALL}")
            input("\nPress Enter to exit.")
            return

        print(f"\n{Fore.GREEN}✔ All image files found. Proceeding to automation.{Style.RESET_ALL}")

        if launch_snapchat(adb_path, device_id):
            print(f"\n{Fore.CYAN}--- Starting Sequential Automation ---{Style.RESET_ALL}")
            print("Press CTRL+C to stop.")
            
            try:
                while True:
                    print(f"\n{Fore.CYAN}--- Starting New Snap Cycle ---{Style.RESET_ALL}")
                    
                    if not find_and_click_with_retry(adb_path, device_id, required_images["capture"], data_dir):
                        print(f"{Fore.RED}Error: Capture button not found. Restarting cycle.{Style.RESET_ALL}")
                        press_back_button(adb_path, device_id, times=3)
                        continue
                    time.sleep(2)

                    if not find_and_click_with_retry(adb_path, device_id, required_images["send_to"], data_dir):
                        print(f"{Fore.RED}Error: Send To button not found. Restarting cycle.{Style.RESET_ALL}")
                        press_back_button(adb_path, device_id, times=3)
                        continue
                    time.sleep(3)

                    if not find_and_click_with_retry(adb_path, device_id, required_images["your_story"], data_dir, retries=3):
                        print(f"{Fore.RED}Error: Your Story button not found. Restarting cycle.{Style.RESET_ALL}")
                        press_back_button(adb_path, device_id, times=3)
                        continue
                    time.sleep(1.5)

                    if not find_and_click_with_retry(adb_path, device_id, required_images["final_send"], data_dir, retries=3):
                        print(f"{Fore.RED}Error: Final Send button not found. Restarting cycle.{Style.RESET_ALL}")
                        press_back_button(adb_path, device_id, times=3)
                        continue

                    print(f"\n{Fore.GREEN}🎉 Snap Posted Successfully! Waiting for 5 seconds before next cycle...{Style.RESET_ALL}")
                    time.sleep(5)

            except KeyboardInterrupt:
                print(f"\n{Fore.YELLOW}Automation stopped by user. Exiting.{Style.RESET_ALL}")
        else:
            print(f"\n{Fore.RED}Could not start Snapchat. Halting script.{Style.RESET_ALL}")
    else:
        print(f"\n{Fore.RED}Could not establish a connection to a device. Exiting.{Style.RESET_ALL}")

    input("\nPress Enter to exit.")

if __name__ == "__main__":
    main()