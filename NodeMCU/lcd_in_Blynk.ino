int trigpin=D1;
int echopin=D2;
long duration;
int distance;
int counter=0;
int buz=D4;

String data="Puss-Ups";
String data1="Push-up Counter";
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "XPELhcATUZPA07e_Ul8m1QImXmBlb5aC";
char ssid[] = "groot";
char pass[] = "12345678";
WidgetLCD lcd(V0);
void setup()
{
  pinMode(buz, OUTPUT);
 Blynk.begin(auth, ssid, pass);
  Serial.begin(115200);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.println("Welcome To Code With Nroy");
  lcd.clear();
}
void loop()
{
  int btvalue=digitalRead(D3);
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
      digitalWrite(buz, HIGH);
      
  }
  else
  {
    digitalWrite(buz, LOW);
  }
  lcd.print(0,0,data1);
 if (counter)
 {
      Serial.print("Counter is ");
      Serial.println(counter);
      
      lcd.print(2,1,counter);  
      lcd.print(5,1,data);

 }
 if(btvalue==0)
 {
   counter=0;
   lcd.clear();

 }
 Serial.println(counter);
 Serial.println(btvalue);
  delay(1000);
}