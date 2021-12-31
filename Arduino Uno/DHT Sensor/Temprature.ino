#include"DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

void setup(){
  Serial.begin(9600);
  Serial.println("DHT Test!");
  dht.begin();
}
void loop(){

  delay(1000);
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  float f=dht.readTemperature(true);

  if(isnan(h)|| isnan(t)|| isnan(f))
  {
    Serial.println("Failed to read from DHT sensor!");
    return ;
  }
  // For Temparature 
  Serial.print("Temparature =");
  Serial.print(t);
  Serial.println("*C");
  // For Humidity
  Serial.print("Humidity=");
  Serial.print(h);
  Serial.println("%");  
}