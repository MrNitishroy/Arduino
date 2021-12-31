const int trigPin=9;
const int echoPin=10;
long duration,inch, cm;
long microsecondsToInchhes(long microseconds){
  return microseconds /74/2;
}
long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29/2;
}
#include<Servo.h>
Servo myservo;
int pos=0;

void setup()
{
  myservo.attach(6);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  inch=microsecondsToInchhes(duration);
  cm=microsecondsToCentimeters(duration);
  Serial.println("Distance=:");
  Serial.print(inch);
  Serial.println("in");
  Serial.print(cm);
  Serial.println("cm");
  delay(250);
  pos=cm;
  myservo.write(pos);
  
}