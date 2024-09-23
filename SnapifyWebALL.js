(function () {
    // Function to check if an element is visible
    function isElementVisible(element) {
        return element && element.offsetWidth > 0 && element.offsetHeight > 0;
    }

    // Function to find element by XPath
    function getElementByXPath(xpath) {
        const result = document.evaluate(xpath, document, null, XPathResult.FIRST_ORDERED_NODE_TYPE, null);
        return result.singleNodeValue;
    }

    // Function to click elements in sequence with a delay
    function clickElementsInSequence(xpaths, delay, callback) {
        function clickNextElement(index) {
            if (index >= xpaths.length) {
                if (callback) callback();
                return;
            }

            const element = getElementByXPath(xpaths[index]);

            if (isElementVisible(element)) {
                element.click();
                console.log(`Element ${index + 1} clicked.`);

                // Delay before clicking the next element
                setTimeout(function () {
                    clickNextElement(index + 1);
                }, delay);
            } else {
                console.log(`Element ${index + 1} not visible. Moving to next element.`);
                clickNextElement(index + 1);
            }
        }

        // Start the process
        clickNextElement(0);
    }

    // Function to click all 'hSQnC' elements that are children of 'Ewflr'
    function clickAllSpecificElements(callback) {
        const ewflrElements = document.querySelectorAll('.Ewflr'); // Select all Ewflr elements
        const totalElements = []; // Array to hold all hSQnC elements

        // Collect all hSQnC elements
        ewflrElements.forEach(ewflrElement => {
            const hSQnCElements = ewflrElement.querySelectorAll('.hSQnC');
            hSQnCElements.forEach(hSQnCElement => {
                totalElements.push(hSQnCElement);
            });
        });

        let clickIndex = 0; // Track index of hSQnC elements to click

        function clickNextSpecific() {
            if (clickIndex >= totalElements.length) {
                console.log('No more specific elements to click.');
                if (callback) callback(); // Call callback when done
                return;
            }

            const element = totalElements[clickIndex];
            const svg = element.querySelector('svg');

            if (svg && svg.classList.contains('DYSLz')) {
                if (isElementVisible(element)) {
                    element.click();
                    console.log(`Specific element ${clickIndex + 1} clicked.`);
                } else {
                    console.log(`Specific element ${clickIndex + 1} not visible.`);
                }
            } else {
                console.log(`Specific element ${clickIndex + 1} not clicked due to class condition.`);
            }

            clickIndex++;
            setTimeout(clickNextSpecific, 1); // Reduced delay for faster clicking
        }

        clickNextSpecific();
    }

    // Main function to perform the clicks
    function performClicks() {
        const xpaths = [
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div/div/div/button[1]",
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div[2]/div[2]/div/div[1]/button[1]",
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[2]/div[2]/button[2]"
        ];

        const delay = 100; // Delay in milliseconds between each click

        clickElementsInSequence(xpaths, delay, function () {
            // Click all specific elements with the class 'hSQnC' that are children of 'Ewflr'
            clickAllSpecificElements(function () {
                const finalElement = getElementByXPath("/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[1]/div/form/div[2]/button");
                if (isElementVisible(finalElement)) {
                    finalElement.click();
                    console.log(`Final element clicked.`);
                } else {
                    console.log(`Final element not visible.`);
                }

                // Restart the clicking process after a 10-second delay
                setTimeout(performClicks, 5000); // 5 seconds delay
            });
        });
    }

    // Define a function to click an element using its XPath
    function clickElementByXPath(xpath) {
        const element = document.evaluate(xpath, document, null, XPathResult.FIRST_ORDERED_NODE_TYPE, null).singleNodeValue;
        if (element) {
            element.click();
            return true;
        } else {
            return false;
        }
    }

    // Define a list of XPath elements to click on
    const xpaths = [
        '/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div/div/div/button[1]',// enable cam
        '/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div[2]/div[2]/div/div[1]/button[1]', // capture
        '/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[2]/div[2]/button[2]', //send to
        '/html/body/main/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/ul/li[1005]/div',// you can change this xpath to be someone elses
        '/html/body/main/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/ul/li[1003]/div',// you can change this xpath to be someone elses
        '/html/body/main/div[1]/div[2]/div/div/div/div/div[1]/div/div/div/div/div[1]/form/ul/li[1002]/div', // you can change this xpath to be someone elses
        // from this line you can add as many other xpaths of users
        '/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[1]/div/form/div[2]/button',
    ];

    // Define a function to click all elements in the list
    function clickAllElements() {
        for (let i = 0; i < xpaths.length; i++) {
            const elementClicked = clickElementByXPath(xpaths[i]);
            if (!elementClicked) {
                console.log(`Element with XPath ${xpaths[i]} not found.`);
            }
        }
    }

    // Define a function to continuously click all elements in the list
    function clickAllElementsContinuously() {
        clickAllElements();
        setTimeout(clickAllElementsContinuously, 1000);
    }

    // Function to display a banner
    function displayBanner() {
        console.clear(); // Clear the console
        console.log('%c%(                              #%', 'color: yellow;');
        console.log('%c%###                          ###%', 'color: yellow;');
        console.log('%c%%%%#####  @@@/@@@/@@@, #####%##%       ███████╗███╗   ██╗ █████╗ ██████╗ ██╗███████╗██╗   ██╗', 'color: yellow;');
        console.log('%c %&%%%#%&@              @&%%#%%&%       ██╔════╝████╗  ██║██╔══██╗██╔══██╗██║██╔════╝╚██╗ ██╔╝', 'color: yellow;');
        console.log('%c    %&&%                 %%%&%          ███████╗██╔██╗ ██║███████║██████╔╝██║█████╗   ╚████╔╝', 'color: yellow;');
        console.log('%c      @@                  @%            ╚════██║██║╚██╗██║██╔══██║██╔═══╝ ██║██╔══╝    ╚██╔╝', 'color: yellow;');
        console.log('%c      @@                  @&            ███████║██║ ╚████║██║  ██║██║     ██║██║        ██║', 'color: yellow;');
        console.log('%c  *@/ @@                  @* @@         ╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝        ╚═╝', 'color: yellow;');
        console.log('%c ,@@                         &@@                                                             ', 'color: yellow;');
        console.log('%c          /                   @@           #1 Free Snapchat booster.', 'color: yellow;');
        console.log('%c         @@                    @%          Developed by @unofficialdxnny', 'color: yellow;');
        console.log('%c       @@                       &@#        ', 'color: yellow;');
        console.log('%c  %@@@*                            @@@@*   V8 | need help? Join Server : https://discord.gg/7HnSE6Jsam', 'color: yellow;');
        console.log('%c  &@@@@(                          @@@@@     ', 'color: yellow;');
        console.log('%c       @@@@@@@             #@@@@@@@', 'color: yellow;');
        console.log('%c               @@@#@@(##@@(', 'color: yellow;');
    }



    // Start the clicking process
    displayBanner();
    performClicks();
})();
