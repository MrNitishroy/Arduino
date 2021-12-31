

#include <Servo.h>

Servo myservo;  
int potpin = A0; 
int val;   

void setup() {
  myservo.attach(5);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potpin); 
  val = map(val, 0, 1023, 0, 180);  
  myservo.write(val);    
  Serial.println(val);
    delay(15);  
}