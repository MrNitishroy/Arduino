#include<ESP8266WiFi.h>
 void setup()
{
    Serial.begin(115200);
    WiFi.begin("groot","12345678");
    Serial.println("Connecting.");
    while (WiFi.status()!=WL_CONNECTED)
    {
        Serial.print("...");
        delay(200);
    }
    Serial.println("");
    Serial.println("WiFi Is Connected !");
    
    Serial.println(WiFi.localIP());
}
void loop()
{
    
}