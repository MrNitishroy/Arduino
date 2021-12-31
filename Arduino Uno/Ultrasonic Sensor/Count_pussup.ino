int trigpin=9;
int echopin=10;
long duration;
int distance;
int counter=0;
void setup()
{
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.println("Welcome To Code With Nroy");
}
void loop()
{
  digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  digitalWrite(echopin,HIGH);
  duration = pulseIn(echopin,HIGH);
  distance= duration*0.034/2;
  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println("CM");
  if(distance<=15)
  {
      counter=counter+1;
      
  }
 if (counter)
 {
      Serial.print("Counter is ");
      Serial.println(counter);
 }
 
  delay(1000);
}