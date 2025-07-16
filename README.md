<!DOCTYPE html>
<html lang="es">
<head>
  <meta charset="UTF-8">
  <title>Proyecto Arduino - Alcoholímetro</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background-color: #f4f4f4;
      margin: 0;
      padding: 20px;
      line-height: 1.6;
    }
    .container {
      max-width: 800px;
      margin: auto;
      background: #fff;
      padding: 30px;
      box-shadow: 0 0 10px rgba(0,0,0,0.1);
    }
    h1 {
      color: #333;
    }
    .led {
      font-weight: bold;
    }
    .led.red {
      color: red;
    }
    .led.green {
      color: green;
    }
    .buzzer {
      font-style: italic;
    }
  </style>
</head>
<body>
  <div class="container">
    <h1>Alcoholímetro con Arduino</h1>
    <p>Este proyecto consiste en un <strong>alcoholímetro casero</strong> desarrollado con Arduino. El sistema utiliza un <strong>sensor de gas</strong> (como el MQ-3) para detectar la presencia de alcohol en el aliento de una persona.</p>
    
    <h2>¿Cómo funciona?</h2>
    <ul>
      <li>El sensor analiza el aliento de la persona.</li>
      <li>Si se detecta un nivel de alcohol por encima de un umbral:
        <ul>
          <li>Se activa un <span class="led red">LED rojo</span>.</li>
          <li>Se enciende un <span class="buzzer">zumbador</span> como señal de advertencia.</li>
        </ul>
      </li>
      <li>Si no se detecta alcohol en el aliento:
        <ul>
          <li>Se enciende un <span class="led green">LED verde</span>.</li>
          <li>El zumbador permanece apagado.</li>
        </ul>
      </li>
    </ul>

    <h2>Componentes utilizados</h2>
    <ul>
      <li>Placa Arduino UNO</li>
      <li>Sensor de gas (MQ-3 o similar)</li>
      <li>LED rojo</li>
      <li>LED verde</li>
      <li>Zumbador</li>
      <li>Resistencias</li>
      <li>Cables de conexión y protoboard</li>
    </ul>

    <h2>Objetivo</h2>
    <p>El objetivo del proyecto es crear una herramienta sencilla que ayude a demostrar cómo los sensores pueden utilizarse para detectar alcohol y emitir alertas en consecuencia. Es ideal como proyecto educativo o demostración de sensores en sistemas embebidos.</p>
  </div>
</body>
</html>
