const { app, BrowserWindow } = require('electron')

const createWindow = () => {
    const win = new BrowserWindow({
      width: 1200,
      height: 700,
      autoHideMenuBar: true,
      icon:'./Assets/Images/favicon.png',
      maxWidth: 1200,
      maxHeight: 700,
      fullscreenable: false,
      
      
    })
  
    win.loadFile('index.html')
  }

  app.whenReady().then(() => {
    createWindow()
  })


  app.on('window-all-closed', () => {
    if (process.platform !== 'darwin') app.quit()
  })