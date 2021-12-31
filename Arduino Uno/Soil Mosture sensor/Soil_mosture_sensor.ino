int msensor = A1;
int msvalue=0;
int led =13;

void setup(){
  Serial.begin(9600);
  pinMode(msensor,INPUT);
  pinMode(led,OUTPUT);
  
}
void loop(){
  msvalue=analogRead(msensor);
  Serial.println(msvalue);
  delay(1000);
}