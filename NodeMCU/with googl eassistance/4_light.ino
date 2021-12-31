#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "dZNH55GSxN1g3ZuTgd3VGot7EvuPTv22";
char ssid[] = "groot";
char pass[] = "12345678"; 

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

}                                                                 
void loop()
{
  Blynk.run();
}
