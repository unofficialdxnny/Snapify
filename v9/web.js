(function () {
    // --- UI Setup: Counter and Buttons ---
    let clickCounter = 0;
    const counterElement = document.createElement('div');
    counterElement.style.position = 'fixed';
    counterElement.style.top = '10px';
    counterElement.style.right = '10px';
    counterElement.style.backgroundColor = 'rgba(0, 0, 0, 0.7)';
    counterElement.style.color = 'white';
    counterElement.style.padding = '10px';
    counterElement.style.borderRadius = '5px';
    counterElement.style.fontFamily = 'Arial, sans-serif';
    counterElement.style.zIndex = 10000;
    counterElement.textContent = `Clicks: ${clickCounter}`;
    document.body.appendChild(counterElement);

    const buttonContainer = document.createElement('div');
    buttonContainer.style.position = 'fixed';
    buttonContainer.style.top = '50px';
    buttonContainer.style.left = '10px';
    buttonContainer.style.zIndex = 10000;
    buttonContainer.style.display = 'flex';
    buttonContainer.style.flexDirection = 'column';
    buttonContainer.style.gap = '10px';
    document.body.appendChild(buttonContainer);

    const startButton = document.createElement('button');
    startButton.textContent = 'Start';
    startButton.style.cssText = 'padding: 10px 15px; background-color: #4CAF50; color: white; border: none; border-radius: 5px; cursor: pointer; font-size: 16px;';
    buttonContainer.appendChild(startButton);

    const stopButton = document.createElement('button');
    stopButton.textContent = 'Stop';
    stopButton.style.cssText = 'padding: 10px 15px; background-color: #f44336; color: white; border: none; border-radius: 5px; cursor: pointer; font-size: 16px;';
    buttonContainer.appendChild(stopButton);

    let mainInterval; // Will hold the setInterval loop

    // --- Helper Functions ---
    const updateCounter = () => {
        clickCounter++;
        counterElement.textContent = `Clicks: ${clickCounter}`;
    };

    const resetCounter = () => {
        clickCounter = 0;
        counterElement.textContent = `Clicks: ${clickCounter}`;
    };

    const getElementByXPath = (xpath) => document.evaluate(xpath, document, null, XPathResult.FIRST_ORDERED_NODE_TYPE, null).singleNodeValue;

    const tryClick = (element, name) => {
        if (element) {
            element.click();
            console.log(`Clicked: ${name}`);
            updateCounter();
            return true;
        }
        return false;
    };

    // --- Core Clicking Logic ---

    // NOTE: Some of your XPaths pointed to non-clickable elements (like <circle> or <div>).
    // They have been adjusted to point to the parent <button> which is the actual clickable element.
    const xpathsToClick = {
        "Camera Shutter": "/html/body/main/div[1]/div[3]/div/div/div/div[1]/div[1]/div/div/div/div/div/button",
        "Capture": "/html/body/main/div[1]/div[3]/div/div/div/div[1]/div[1]/div/div/div/div/div/div[2]/div/div/div/div[2]/div/",
        "Send To": "/html/body/main/div[1]/div[3]/div/div/div/div[1]/div[1]/div/div/div/div/div[2]/div[2]/button[2]",
        "Final Send": "/html/body/main/div[1]/div[3]/div/div/div/div[1]/div[1]/div/div/div/div/div[1]/div/form/div[2]/button"
    };

    function clickWhateverIsVisible() {
        // Try to click the main buttons first
        for (const name in xpathsToClick) {
            const element = getElementByXPath(xpathsToClick[name]);
            if (tryClick(element, name)) {
                // If we clicked something, maybe wait a tiny bit before the next check
                // This can help the UI update.
            }
        }

        // Separately, find and click all available recipients
        const recipients = document.querySelectorAll('.hSQnC');
        if (recipients.length > 0) {
            console.log(`Found and clicking ${recipients.length} recipients.`);
            recipients.forEach((recipient) => {
                tryClick(recipient, "Recipient");
            });
        }
    }

    // --- Event Listeners for Buttons ---
    startButton.addEventListener('click', () => {
        if (mainInterval) return; // Already running
        console.log('Starting endless clicking loop...');
        resetCounter();
        startButton.disabled = true;
        stopButton.disabled = false;
        // Run the click function every 1.5 seconds
        mainInterval = setInterval(clickWhateverIsVisible, 1500);
    });

    stopButton.addEventListener('click', () => {
        if (!mainInterval) return; // Already stopped
        console.log('Stopping loop.');
        clearInterval(mainInterval);
        mainInterval = null;
        startButton.disabled = false;
        stopButton.disabled = true;
    });

    // Initialize button states
    stopButton.disabled = true;

})();