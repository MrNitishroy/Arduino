
int LaserSensor = 2;
int SensorReading = HIGH;  // HIGH MEANS NO OBSTACLE
int Laser = 3;
int buzz = 4;
 
void setup() {
  Serial.begin(9600);
  pinMode(Laser, OUTPUT);
  pinMode(LaserSensor, INPUT);
  pinMode(buzz,OUTPUT);
}

void loop() {
  digitalWrite(Laser, HIGH);
  delay(200);
  SensorReading = digitalRead(LaserSensor);
  if (SensorReading == LOW)
  {
  digitalWrite(buzz,LOW);
  }
 
  else
  {
     digitalWrite(buzz,HIGH);
  }}
  