// create thinkspeak ccount
// menu-->Apps-->TalkBack-->Create new talkback
// log to channneer -->temrature humidity
// where you gave 
// 1.Talkback id 8585
// 2. API Key 123
// Set Command 5565
// Get a TalkBack Command https://url.com

// go IFTT Platform
// Login
// Create appletes

// If this 
// google assistance --> Simple phares --> Connect --> 
// What do youu want to say -> Command
// Other way --> blub on
// Respons --> Ok Light is on 

// Then That
// webhooks-->Web request
// URL -->https://url.com change COMMAND ID --> 5565 // in the last add command_string=ON
//method -->put
//Connection type--> Appplication/x-www-form


#include<ESP8266WiFi.h>
#include<DNSServer.h>
#Include<ESP8266HTTPClient.h>

int talkback_id= 42155;
int command_id= 2362563562;
String talkBack_api="dshfksdfhudskjhfsdk";
String command_string="";
int LED = D1;

void setup()
{
    Serial.begin(115200);
    Serial.flush();
    pinMode(LED, OUTPUT);
    WiFi.begin("ssid","Password");
    while (WiFi.status()!=WL_CONNECTED)
    {
        Serial.print("...");
        delay(100);
    }
    Serial.println();
    Serial.println("NodeMCU Is Connected!");
    Serial.println(WiFi.localIP());
}

void loop()
{
    GETcommand();
    if (command_string=="ON")
    {
        digitalWrite(LED, LOW); // LOW = ON
    }else if (connect_string=="OFF")
    {
        digitalWrite(LED, HIGH); // HIGH = OFF
    }
    
}



