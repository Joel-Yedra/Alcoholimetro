void setup() {

  Serial.begin(9600);
  pinMode(8,OUTPUT); // Led verde 
  pinMode(7,OUTPUT); // Led rojo 
  pinMode(4,OUTPUT); // Zumbador
  pinMode(A0,INPUT); //sensor de gas


}


void loop() {
 int gas;
 gas=analogRead(A0);

if(gas>555)
 {

digitalWrite(7,HIGH);
digitalWrite(8,LOW);

digitalWrite(4,HIGH);
delay(1000);
digitalWrite(4,LOW);
delay(1000);

 }

 else{

  digitalWrite(7,LOW); //Rojo
  digitalWrite(8,HIGH); //Verde
  digitalWrite(4,LOW); //zumbador

  //Serial.println(gas);
 }

 
 Serial.println(gas);

 



}
