#include<ESP8266WiFi.h>
const char* ssid="Groot";
const char* password="1234567"  // here ssid and paddword is your mobile ssid and password

void setup()
{
    Serial.begin(115200);
    delay(20);

    Serial.println();
    Serial.print("Connecting to ");
    Serial.print(ssid);
    Serial.println();

    WiFi.begin(ssid,password);
    while(WiFi.status()!=WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.print("Connected");
}

void loop()
{
    
}