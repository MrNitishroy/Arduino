#define pir 3
#define buzz 13
void setup()
{
  pinMode(pir,INPUT);
  Serial.begin(9600);
  pinMode(buzz,OUTPUT);
  
}
void loop()
{

  int value = digitalRead(pir);
  Serial.println(value);
  delay(600);
  if(value==1)
  {
    digitalWrite(buzz,HIGH);
  }
  else
  {
    digitalWrite(buzz,LOW);
  }
}