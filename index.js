

  if ("username" in localStorage) {
    
    document.getElementById("result").innerHTML = localStorage.getItem("username");
    

} else {
  let username = prompt("Whats your Snapchat username?", "");

  localStorage.setItem("username", username);

  document.getElementById("result").innerHTML = localStorage.getItem("username");

}