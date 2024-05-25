// src/renderer/renderer.js
import React from 'react';
import ReactDOM from 'react-dom';
import Header from './components/Header';
import Footer from './components/Footer';
import SnapComponent from './components/SnapComponent';

const App = () => (
  <div>
    <Header />
    <SnapComponent />
    <Footer />
  </div>
);

ReactDOM.render(<App />, document.getElementById('root'));
