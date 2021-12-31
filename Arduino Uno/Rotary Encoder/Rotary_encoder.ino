#include <Encoder.h>
Encoder myEnc(5,6);
void setup() {
  Serial.begin(9600);
  Serial.printf("No Intruppet");
  // put your setup code here, to run once:

}
long Position=-999;

void loop() {
  long newposition=myEnc.read();
  if(newposition=Position){
    Position=newpostion;
    Serial.println(Position);
    delay(50);
  }
  // put your main code here, to run repeatedly:

}