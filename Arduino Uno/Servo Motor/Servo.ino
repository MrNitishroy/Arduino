#include<Servo.h>
//servo attached with digital pin 2
Servo Myservo(); // Create object of servo 
int value=0;


void setup()
{
    Serial.begin(9600);
    Myservo.attach(2);
}
void loop()
{
   Serial.println("Sevo value= ") ;
   Serial.print(value);
   Myservo.Write(value); // Value between 0 to 180
}