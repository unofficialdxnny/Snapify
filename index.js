




// Check browser support
if (typeof(Storage) !== "undefined") {
    // Write
    let username = prompt("Whats your Snapchat username?", "");

    // Store
    localStorage.setItem("username", username);
    // Retrieve
    document.getElementById("result").innerHTML = localStorage.getItem("username");
  } else {
    document.getElementById("result").innerHTML = "";  
  }