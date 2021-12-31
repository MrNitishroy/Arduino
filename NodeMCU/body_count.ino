int ir;
int count=0;
int re;


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
  pinMode(D4, INPUT);
  Blynk.begin(auth, ssid, pass);
  Serial.begin(115200);
  Serial.println("Welcome To Code room");

  lcd.clear();
}
void loop()
{
  lcd.print(0,0, data1);
  lcd.print(0,1, count);
  lcd.print(3,1,data);
  delay(500);
  ir=digitalRead(D0);
  re=digitalRead(D4);
  Serial.println(ir);
  Serial.println(re);
  if(ir==0)
  {
      count++;
  }
 
}