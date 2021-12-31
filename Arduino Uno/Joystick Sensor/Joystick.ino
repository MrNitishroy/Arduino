
// VRx = A0 pin connected
// VRu = A1 connected
int x;
int y;

void setup()
{
    Serial.begin(9600);

}
void loop()
{
    x=analogRead(A0);
    y=analogRead(A1);
    Serial.print("Joy value in X= ");
    Serial.println("x");
    Serial.print("Joy value in Y= ");
    Serial.print(y);
    delay(400);
}