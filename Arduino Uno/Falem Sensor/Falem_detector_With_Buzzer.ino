// lowest and highest sensor readings:
const int sensorMin = 0;     // sensor minimum
const int sensorMax = 1024;  // sensor maximum
int red=8;
int green=9;
int buzzer=10;


void setup()
{
  // initialize serial communication @ 9600 baud:
  Serial.begin(9600);  
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void loop() {
  // read the sensor on analog A0:
  int value = analogRead(A0);
  // map the sensor range (four options):
  // ex: 'long int map(long int, long int, long int, long int, long int)'
  Serial.println(value);
  if(value<30)
  {
    digitalWrite(red,1);
    digitalWrite(buzzer,1);
  }
  else
  {
    digitalWrite(red,0);
    digitalWrite(buzzer,0);
    digitalWrite(green,1);
  }
  delay(100);  // delay between reads
}