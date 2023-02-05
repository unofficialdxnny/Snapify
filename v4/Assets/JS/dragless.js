document.querySelectorAll("*").forEach((elem) => {
    elem.setAttribute('draggable', false)
    elem.addEventListener('dragstart', (event) => {
        event.preventDefault()
    })
})