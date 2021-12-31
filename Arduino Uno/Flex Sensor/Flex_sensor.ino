#define flexsensor A0
int flexValue=0;
void setup()
{
    pinMode(flexsensor, INPUT);
    Serial.begin(9600);

}
void loop()
{
    flexValue=analogRead(flexsensor);   
    Serial.print("FLex Value is = ");
    Serial.println(flexValue);
    delay(500);
}