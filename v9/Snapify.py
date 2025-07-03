import os
import sys
import time
from colorama import Fore, Style, init
import readchar
from selenium import webdriver # This will be imported only when needed
from selenium.webdriver.chrome.service import Service # This will be imported only when needed
from webdriver_manager.chrome import ChromeDriverManager # This will be imported only when needed

# Initialize Colorama
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

def interactive_menu(options):
    """
    Displays an interactive menu navigable with arrow keys.
    Returns the index of the selected option.
    """
    selected_option_index = 0
    num_options = len(options)

    while True:
        clear_screen() # Clear screen before redrawing
        print(Fore.YELLOW + Style.BRIGHT + banner + Style.RESET_ALL)
        print("\n" + "="*30)
        print(" Use ↑↓ to navigate, Enter to select ".center(30))
        print("="*30 + "\n")
        print_menu(options, selected_option_index)

        key = readchar.readkey() # Read a single key press

        if key == readchar.key.UP:
            selected_option_index = (selected_option_index - 1 + num_options) % num_options
        elif key == readchar.key.DOWN:
            selected_option_index = (selected_option_index + 1) % num_options
        elif key == readchar.key.ENTER:
            break # User pressed Enter, exit loop
        elif key == readchar.key.ESC: # Allow ESC to exit the program
            print(f"\n{Fore.RED}Exiting...{Style.RESET_ALL}")
            sys.exit()

    return selected_option_index

if __name__ == "__main__":
    menu_options = [
        "Chrome Web Driver",
        "Android Debug Bridge"
    ]

    while True: # Loop to allow returning to the menu
        selected_index = interactive_menu(menu_options)
        chosen_option = menu_options[selected_index]

        clear_screen() # Clear screen after selection
        print(Fore.YELLOW + Style.BRIGHT + banner + Style.RESET_ALL)
        # print(f"\n{Fore.GREEN}You selected: {chosen_option}{Style.RESET_ALL}\n")

        if chosen_option == "Chrome Web Driver":
            show_loading_animation("Initializing Chrome Web Driver", duration=3)
            print(f"{Fore.WHITE}Importing Selenium and Web Driver Manager...{Style.RESET_ALL}")
            time.sleep(1)
            print(f"{Fore.GREEN}Chrome Web Driver ready!{Style.RESET_ALL}\n")
            print("Press any key to return to the main menu...")
            readchar.readkey()
        elif chosen_option == "Android Debug Bridge":
            print(f"{Fore.RED}Coming Soon!{Style.RESET_ALL}\n")
            print("Press any key to return to the main menu...")
            readchar.readkey()
