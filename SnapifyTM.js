// ==UserScript==
// @name         Snapify
// @namespace    https://github.com/unofficialdxnny/Snapify
// @version      2024-09-25
// @description  Boost Snapscore
// @author       unofficialdxnny (Danial Ahmed)
// @match        https://web.snapchat.com/
// @icon         https://www.google.com/s2/favicons?sz=64&domain=snapchat.com
// @grant        none
// ==/UserScript==


(function () {
    // Add a visual counter to the page
    let clickCounter = 0;
    const counterElement = document.createElement('div');
    counterElement.style.position = 'fixed';
    counterElement.style.top = '10px';
    counterElement.style.right = '10px';
    counterElement.style.backgroundColor = 'black';
    counterElement.style.color = 'white';
    counterElement.style.padding = '10px';
    counterElement.style.zIndex = 10000;
    counterElement.textContent = `Elements clicked: ${clickCounter}`;
    document.body.appendChild(counterElement);

    // Function to update the visual counter
    function updateCounter() {
        clickCounter++;
        counterElement.textContent = `Elements clicked: ${clickCounter}`;
    }

    // Function to reset the counter
    function resetCounter() {
        clickCounter = 0;
        counterElement.textContent = `Elements clicked: ${clickCounter}`;
    }

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
                updateCounter(); // Increment counter for each click
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
                    updateCounter(); // Increment counter for each click
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
        resetCounter(); // Reset the counter at the start of each loop

        const xpaths = [
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div/div/div/button[1]",
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div/div[2]/div[2]/div/div[1]/button[1]",
            "/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[2]/div[2]/button[2]"
        ];

        const delay = 500; // Delay in milliseconds between each click

        clickElementsInSequence(xpaths, delay, function () {
            // Click all specific elements with the class 'hSQnC' that are children of 'Ewflr'
            clickAllSpecificElements(function () {
                const finalElement = getElementByXPath("/html/body/main/div[1]/div[3]/div/div/div/div[2]/div[1]/div/div/div/div/div[1]/div/form/div[2]/button");
                if (isElementVisible(finalElement)) {
                    finalElement.click();
                    updateCounter(); // Increment counter for the final click
                    console.log(`Final element clicked.`);
                } else {
                    console.log(`Final element not visible.`);
                }

                // Reload the page after the click sequence
                setTimeout(() => {
                    location.reload();
                }, 5000); // 5 seconds delay before reloading the page
            });
        });
    }

    // Start the clicking process after a 5 seconds delay upon page load
    setTimeout(performClicks, 5000);
})();
