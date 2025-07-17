# 🥃 Alcoholímetro en Arduino

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

El objetivo del proyecto es crear una herramienta sencilla que ayude a demostrar cómo los sensores pueden utilizarse para detectar alcohol y emitir alertas en consecuencia. Es ideal para la demostración de sensores en sistemas embebidos.

---

##  🧐 Uso del programa

1. Declaramos los pines de entrada y salida que vamos a utilizar en el "void setup"  
   ```
   void setup() {
  ```
  Serial.begin(9600);
  pinMode(8,OUTPUT); // Led verde 
  pinMode(7,OUTPUT); // Led rojo 
  pinMode(4,OUTPUT); // Zumbador
  pinMode(A0,INPUT); //sensor de gas
}
 ```
2. Declaaramos una variable que servira para guardar las lecturas que nos de el sensor y utilizamos una funcion llamada "analogRead" para obtener esas lecturas y guardarlas en esa variable
   
   ```
   int gas;
   gas=analogRead(A0);
   
   ```
3. Se calibra el sensor y se obtienen lecturas en el caso en que se este detectando alcohol. Despues de realizar pruebas, se demostro que las bebibas alcoholicas tenian un valor menor a 555. Por esta razon, se decidio que en la estrcutura de control condicional "if" se diera la condicion con el valor de 555

   Cuando se cumple esta condicion se activa el zumbador y el LED rojo como señal de que se ha detectado alcohol en el aliento
   
 ```
 if(gas>555){

  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);

  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);

 }
   ```
Si la lectura no cumple con la condicion; entonces se activa el LED verde y el zumbador no se activa. Demostrando que no se ha detectado alcohol en el aliento

  ```
 else{

  digitalWrite(7,LOW); //Rojo
  digitalWrite(8,HIGH); //Verde
  digitalWrite(4,LOW); //zumbador

  //Serial.println(gas);
 }
   ```
   
  
   

