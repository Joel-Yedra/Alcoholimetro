# 🥃 Arduino Breathalyzer

This project consists of a homemade breathalyzer developed using Arduino. The system uses a gas sensor (such as the MQ-3) to detect the presence of alcohol in a person’s breath.

---

## 🔧 How does it work?

1. The sensor analyzes the person’s breath.

2. If an alcohol level above a threshold is detected a red LED turns on and a buzzer is activated as a warning signal.

3. If no alcohol is detected in the breath a green LED turns on and the buzzer remains off.

---

## 🧰 Components Used

-Arduino UNO board
-Gas sensor (MQ-3 or similar)
-Red LED
-Green LED
-Buzzer
-Resistors
-Jumper wires and breadboard

---

## 🎯 Objective

The objective of the project is to create a simple tool that demonstrates how sensors can be used to detect alcohol and issue alerts accordingly. It is ideal for showcasing sensors in embedded systems.

---

##  🧐 Program Usage

1. We declare the input and output pins to be used in the void setup section: 
   ```
   void setup() {
  ```
  Serial.begin(9600);
  pinMode(8,OUTPUT); // green LED 
  pinMode(7,OUTPUT); // Red LED
  pinMode(4,OUTPUT); // Buzzer
  pinMode(A0,INPUT); //Gas sensor 
}
 ```
2. We declare a variable to store the readings from the sensor, and we use a function called analogRead to obtain those readings and store them in that variable:
   
   ```
   int gas;
   gas=analogRead(A0);
   
   ```
3. The sensor is calibrated and readings are taken in the case where alcohol is being detected. After testing, it was demonstrated that alcoholic beverages produced a value lower than 555. For this reason, it was decided that in the conditional control structure if, the condition should be set with the value 555

   When this condition is met, the buzzer and the red LED are activated as a signal that alcohol has been detected in the breath:
   
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
If the reading does not meet the condition, then the green LED is activated and the buzzer remains off, indicating that no alcohol was detected in the breath:

  ```
 else{

  digitalWrite(7,LOW); //Red
  digitalWrite(8,HIGH); //Green
  digitalWrite(4,LOW); //Buzzer

  //Serial.println(gas);
 }
   ```
   
  ---
  ##  📹 Demo Video
  [Breathalyzer](https://www.youtube.com/watch?v=YBYfqKSBUm4)

   

