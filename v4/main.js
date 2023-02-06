const { app, BrowserWindow } = require('electron')

const createWindow = () => {
    const win = new BrowserWindow({
      width: 1200,
      height: 700,
      autoHideMenuBar: true,
      icon:'./Assets/Images/favicon.png',
      
      fullscreenable: false,
      minHeight: 700,
      minWidth: 1200,
      maxHeight: 700,
      maxWidth: 1200
      
      
    })
  
    win.loadFile('index.html')
  }

  
  app.whenReady().then(() => {
    createWindow()
  })


  app.on('window-all-closed', () => {
    if (process.platform !== 'darwin') app.quit()
  })