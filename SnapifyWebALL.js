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

    // Add start and stop buttons
    const buttonContainer = document.createElement('div');
    buttonContainer.style.position = 'fixed';
    buttonContainer.style.top = '50px';
    buttonContainer.style.left = '10px';
    buttonContainer.style.zIndex = 10000;
    buttonContainer.style.display = 'flex';
    buttonContainer.style.flexDirection = 'column';
    buttonContainer.style.gap = '10px'; // Add space between buttons
    document.body.appendChild(buttonContainer);

    const startButton = document.createElement('button');
    startButton.textContent = 'Start';
    startButton.style.padding = '10px 15px';
    startButton.style.backgroundColor = '#4CAF50'; // Green color
    startButton.style.color = 'white';
    startButton.style.border = 'none';
    startButton.style.borderRadius = '5px';
    startButton.style.cursor = 'pointer';
    startButton.style.fontSize = '16px';
    startButton.style.transition = 'background-color 0.3s';
    buttonContainer.appendChild(startButton);

    const stopButton = document.createElement('button');
    stopButton.textContent = 'Stop';
    stopButton.style.padding = '10px 15px';
    stopButton.style.backgroundColor = '#f44336'; // Red color
    stopButton.style.color = 'white';
    stopButton.style.border = 'none';
    stopButton.style.borderRadius = '5px';
    stopButton.style.cursor = 'pointer';
    stopButton.style.fontSize = '16px';
    stopButton.style.transition = 'background-color 0.3s';
    buttonContainer.appendChild(stopButton);

    // Add hover effects
    startButton.addEventListener('mouseover', () => {
        startButton.style.backgroundColor = '#45a049'; // Darker green
    });
    startButton.addEventListener('mouseout', () => {
        startButton.style.backgroundColor = '#4CAF50'; // Original green
    });

    stopButton.addEventListener('mouseover', () => {
        stopButton.style.backgroundColor = '#e53935'; // Darker red
    });
    stopButton.addEventListener('mouseout', () => {
        stopButton.style.backgroundColor = '#f44336'; // Original red
    });

    let isClicking = false; // Flag to control clicking process
    let clickInterval; // Variable to hold the setInterval for clicking

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

                    // Wait for 10 seconds before allowing the site to perform its actions
                    setTimeout(function() {
                        console.log(`Waiting for the site to do its thing...`);

                        // Wait an additional 5 seconds before running the process again
                        setTimeout(function() {
                            console.log(`Restarting the clicking process...`);
                            performClicks(); // Restart clicking process
                        }, 5000); // 5 seconds delay
                    }, 10000); // 10 seconds delay
                } else {
                    console.log(`Final element not visible.`);
                }
            });
        });
    }

    // Event listener for start button
    startButton.addEventListener('click', function () {
        if (!isClicking) {
            isClicking = true;
            performClicks(); // Start clicking process
            startButton.disabled = true; // Disable the start button
            stopButton.disabled = false; // Enable the stop button
        }
    });

    // Event listener for stop button
    stopButton.addEventListener('click', function () {
        isClicking = false;
        clearTimeout(clickInterval); // Stop the clicking process
        startButton.disabled = false; // Enable the start button
        stopButton.disabled = true; // Disable the stop button
    });

    // Initialize stop button to be disabled at first
    stopButton.disabled = true;

})();
