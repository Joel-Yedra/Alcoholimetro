# Alcoholímetro con Arduino

Este proyecto consiste en un **alcoholímetro casero** desarrollado con Arduino. El sistema utiliza un **sensor de gas** (como el MQ-3) para detectar la presencia de alcohol en el aliento de una persona.

---

## 🔧 ¿Cómo funciona?

- El sensor analiza el aliento de la persona.
- Si se detecta un nivel de alcohol por encima de un umbral:
  - Se activa un **LED rojo**.
  - Se enciende un *zumbador* como señal de advertencia.
- Si no se detecta alcohol en el aliento:
  - Se enciende un **LED verde**.
  - El zumbador permanece apagado.

---

## 🧰 Componentes utilizados

- Placa Arduino UNO
- Sensor de gas (MQ-3 o similar)
- LED rojo
- LED verde
- Zumbador
- Resistencias
- Cables de conexión y protoboard

---

## 🎯 Objetivo

El objetivo del proyecto es crear una herramienta sencilla que ayude a demostrar cómo los sensores pueden utilizarse para detectar alcohol y emitir alertas en consecuencia. Es ideal como proyecto educativo o demostración de sensores en sistemas embebidos.

