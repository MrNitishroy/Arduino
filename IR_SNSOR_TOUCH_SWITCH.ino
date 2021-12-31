int sen=7;
int value;
boolean v=false;
int led=12;
void setup()
{
  Serial.begin(9600);
  pinMode(sen,INPUT);
  pinMode(led,OUTPUT);
  
}
void loop()
{
  value=digitalRead(sen);
  
  if(value==0)
  {
    v=!v;
  }
  Serial.print(value);
  Serial.println(v);
  if(v==1)
  {
   digitalWrite(led,HIGH);
   Serial.println("LED ON");
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("LED off");
  }
  delay(500);
}
