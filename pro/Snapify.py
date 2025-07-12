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
  %@@@* @@@@*.   Pro | need help? Join Server : https://discord.gg/7HnSE6Jsam
  &@@@@(                          @@@@@
       @@@@@@@             #@@@@@@@
               @@@#@@(##@@(

               """

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def take_screenshot_in_memory(adb_path, device_id):
    """Takes a screenshot and returns it as an OpenCV image object without saving to disk."""
    try:
        # The `screencap -p` command outputs a PNG to stdout
        result = subprocess.run(
            [adb_path, "-s", device_id, "exec-out", "screencap", "-p"],
            capture_output=True, check=True
        )
        # Convert the raw PNG data from bytes to a NumPy array
        image_data = np.frombuffer(result.stdout, np.uint8)
        # Decode the NumPy array into an OpenCV image (in grayscale)
        screen = cv2.imdecode(image_data, cv2.IMREAD_GRAYSCALE)
        return screen
    except subprocess.CalledProcessError as e:
        # This can happen if the device is disconnected or the screen is off
        print(f"{Fore.RED}[ADB ERROR] Failed to take screenshot: {e.stderr.decode().strip()}{Style.RESET_ALL}")
        return None
    except FileNotFoundError:
        # This is a critical error if ADB is missing
        print(f"{Fore.RED}[CRITICAL ERROR] 'adb' not found at '{adb_path}'.{Style.RESET_ALL}")
        return None
    except Exception as e:
        print(f"{Fore.RED}[CV2 ERROR] Failed to decode screenshot: {e}{Style.RESET_ALL}")
        return None


def poll_and_click(adb_path, device_id, template_image, image_name, retries=10, delay=0.5, confidence_threshold=0.85):
    """
    Polls the screen for a template image and clicks it when found.
    This is the core function that replaces find_and_click_with_retry and its helpers.
    """
    for i in range(retries):
        screen = take_screenshot_in_memory(adb_path, device_id)
        if screen is None:
            print(f"  -> Failed to get screen. Retrying ({i+1}/{retries})...")
            time.sleep(delay * 2) # Wait a bit longer if screenshot fails
            continue

        # Perform template matching
        result = cv2.matchTemplate(screen, template_image, cv2.TM_CCOEFF_NORMED)
        _, max_val, _, max_loc = cv2.minMaxLoc(result)

        if max_val >= confidence_threshold:
            template_height, template_width = template_image.shape
            center_x = max_loc[0] + template_width // 2
            center_y = max_loc[1] + template_height // 2

            print(f"{Fore.GREEN}✔ Found '{image_name}' (Conf: {max_val:.2f}). Clicking...{Style.RESET_ALL}")
            subprocess.run([adb_path, "-s", device_id, "shell", "input", "tap", str(center_x), str(center_y)], capture_output=True)
            return True
        
        # If not found, print a message on the first try and wait before retrying
        if i == 0:
            print(f"  -> Searching for '{image_name}'...")
        time.sleep(delay)
    
    print(f"{Fore.RED}✖ Error: Could not find '{image_name}' after {retries} retries.{Style.RESET_ALL}")
    return False

def press_back_button(adb_path, device_id, times=1):
    """Presses the Android back button to recover from an error state."""
    print(f"{Fore.YELLOW}Attempting to recover by pressing the back button {times} time(s)...{Style.RESET_ALL}")
    for _ in range(times):
        subprocess.run([adb_path, "-s", device_id, "shell", "input", "keyevent", "4"], capture_output=True)
        time.sleep(0.5)

def find_and_connect_device(adb_path):
    """Scans for and connects to an authorized ADB device."""
    print(f"{Fore.WHITE}--- ADB Device Connection ---{Style.RESET_ALL}")
    while True:
        try:
            result = subprocess.run([adb_path, "devices"], capture_output=True, text=True, check=True)
            devices = result.stdout.strip().split('\n')[1:]
            authorized_devices = [line.split('\t')[0] for line in devices if line.strip() and line.split('\t')[1] == 'device']

            if authorized_devices:
                device_id = authorized_devices[0]
                sys.stdout.write("\r" + " " * 80 + "\r") # Clear the line
                print(f"{Fore.GREEN}✔ [CONNECTED] Connected to device: {device_id}{Style.RESET_ALL}")
                return device_id
            elif not devices or not any(d.strip() for d in devices):
                 print(f"\r{Fore.YELLOW}[WAITING] No devices detected. Please connect your phone and enable USB Debugging...", end="")
            else:
                print(f"\r{Fore.RED}[ACTION REQUIRED] Device found, but not authorized. Please allow USB Debugging on your phone's screen.", end="")
        except Exception:
            print(f"\r{Fore.RED}[ERROR] ADB command failed. Is ADB installed and in your PATH?", end="")
            return None
        time.sleep(2)

def launch_snapchat(adb_path, device_id):
    """Launches the Snapchat app on the connected device."""
    print(f"\n{Fore.WHITE}Attempting to launch Snapchat...{Style.RESET_ALL}")
    package_name = "com.snapchat.android"
    activity_name = "com.snapchat.android.LandingPageActivity"
    try:
        # Use `am start` to launch the app's main activity
        subprocess.run([adb_path, "-s", device_id, "shell", "am", "start", "-n", f"{package_name}/{activity_name}"], check=True, capture_output=True)
        print(f"{Fore.GREEN}✔ Snapchat launched successfully! Waiting for app to load...{Style.RESET_ALL}")
        time.sleep(5) # Keep a sleep here to allow the app to fully load before starting
        return True
    except subprocess.CalledProcessError as e:
        print(f"{Fore.RED}Failed to launch Snapchat: {e.stderr.decode()}{Style.RESET_ALL}")
        return False

def main():
    clear_screen()
    print(Fore.YELLOW + Style.BRIGHT + banner)

    # --- Setup Paths ---
    script_dir = os.path.dirname(os.path.realpath(sys.argv[0]))
    platform_tools_dir = os.path.join(script_dir, "platform-tools")
    adb_path = os.path.join(platform_tools_dir, "adb.exe" if sys.platform == "win32" else "adb")
    data_dir = os.path.join(script_dir, "data")
    
    # --- Check for ADB ---
    if not os.path.exists(adb_path):
        print(f"{Fore.RED}CRITICAL ERROR: 'adb' executable not found in 'platform-tools' folder.{Style.RESET_ALL}")
        input("\nPress Enter to exit.")
        return

    # --- Pre-load template images into memory ---
    print(f"\n{Fore.WHITE}--- Loading required image files ---{Style.RESET_ALL}")
    required_image_paths = {
        "capture": os.path.join(data_dir, "capture_button.png"),
        "send_to": os.path.join(data_dir, "send_to_button.png"),
        "your_story": os.path.join(data_dir, "your_story_button.png"),
        "final_send": os.path.join(data_dir, "final_send_button.png")
    }
    
    template_images = {}
    all_files_found = True
    for name, path in required_image_paths.items():
        if os.path.exists(path):
            print(f"{Fore.GREEN}✔ Found: {os.path.basename(path)}")
            # Load the image in grayscale directly into our dictionary
            template_images[name] = cv2.imread(path, cv2.IMREAD_GRAYSCALE)
        else:
            print(f"{Fore.RED}✖ Missing: {os.path.basename(path)}")
            all_files_found = False
            
    if not all_files_found:
        print(f"\n{Fore.RED}One or more image files are missing from the 'data' folder.{Style.RESET_ALL}")
        input("\nPress Enter to exit.")
        return

    # --- Connect to Device and Start Automation ---
    device_id = find_and_connect_device(adb_path)
    if not device_id:
        print(f"\n{Fore.RED}Could not establish a connection to a device. Exiting.{Style.RESET_ALL}")
        input("\nPress Enter to exit.")
        return
        
    if not launch_snapchat(adb_path, device_id):
        print(f"\n{Fore.RED}Could not start Snapchat. Halting script.{Style.RESET_ALL}")
        input("\nPress Enter to exit.")
        return

    print(f"\n{Fore.CYAN}--- Starting Sequential Automation ---{Style.RESET_ALL}")
    print("Press CTRL+C to stop.")
    
    try:
        snap_count = 0
        while True:
            snap_count += 1
            print(f"\n{Fore.CYAN}--- Starting Snap Cycle #{snap_count} ---{Style.RESET_ALL}")
            
            # The sequence of operations. If any step fails, press back and restart the loop.
            # Note the removal of all `time.sleep()` calls between steps.
            if not poll_and_click(adb_path, device_id, template_images["capture"], "Capture button"):
                press_back_button(adb_path, device_id, times=3)
                continue

            if not poll_and_click(adb_path, device_id, template_images["send_to"], "Send To button"):
                press_back_button(adb_path, device_id, times=3)
                continue

            if not poll_and_click(adb_path, device_id, template_images["your_story"], "Your Story button"):
                press_back_button(adb_path, device_id, times=3)
                continue

            if not poll_and_click(adb_path, device_id, template_images["final_send"], "Final Send button"):
                press_back_button(adb_path, device_id, times=3)
                continue

            print(f"\n{Fore.GREEN}🎉 Snap #{snap_count} Posted Successfully!{Style.RESET_ALL}")
            # A short delay to let the app return to the camera screen and avoid rate-limiting.
            time.sleep(2)

    except KeyboardInterrupt:
        print(f"\n\n{Fore.YELLOW}Automation stopped by user. Exiting.{Style.RESET_ALL}")
    except Exception as e:
        print(f"\n{Fore.RED}An unexpected error occurred: {e}{Style.RESET_ALL}")
    finally:
        input("\nPress Enter to exit.")

if __name__ == "__main__":
    main()