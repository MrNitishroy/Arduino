#include<ESP8266WiFi.h>
const char* SSID="wifi name";
const char* Password="123";
WiFiClient client;
WiFiServer server(80); // 80 is a port number 
void setup()
{
    Serial.begin(9600);
    WiFi.begin("SSID","Password");
    while (WiFi.status()!=WL_CONNECTED)
    {
        delay(200);
        Serial.print("...");

    }
    Serial.println();
    Serial.println("NodeMCU is Connected");
    Serial.println(WiFi.localIP());
    server.begin();
    
}
void loop()
{
    client = server.available(); // gets a clint that is Connected to the server and has date available for reading
    if(client==1)
    {
        String request = client.readStringUntil('\n');
        Serial.println(request);
    }
}
