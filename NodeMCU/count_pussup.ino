int trigpin=D1;
int echopin=D2;
long duration;
int distance;
int counter=0;
WidgetLCD lcd(V0);
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "XPELhcATUZPA07e_Ul8m1QImXmBlb5aC";
char ssid[] = "groot";
char pass[] = "12345678";
void setup()
{
 Blynk.begin(auth, ssid, pass);
  Serial.begin(115200);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.println("Welcome To Code With Nroy");
}
void loop()
{
   Blynk.run();
  digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  digitalWrite(echopin,HIGH);
  duration = pulseIn(echopin,HIGH);
  distance= duration*0.034/2;
  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println("CM");
  if(distance<=15)
  {
      counter=counter+1;
      
  }
 if (counter)
 {
      Serial.print("Counter is ");
      Serial.println(counter);
      lcd.print(0,0,counter);

 }
 
  delay(1000);
}