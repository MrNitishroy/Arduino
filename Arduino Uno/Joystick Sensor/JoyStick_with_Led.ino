int right=6;
int left=4;
int bottom=5;
int up =7;

int x;
int y;
int value;

void setup()
{
    Serial.begin(9600);
    pinMode(right,OUTPUT);
    pinMode(left,OUTPUT);
    pinMode(up,OUTPUT);
    pinMode(bottom,OUTPUT);
}

void loop()
{
   
    x=analogRead(A0);
    y=analogRead(A1);
    Serial.print("X= ");
    Serial.println(x);
    Serial.print("Y= ");
    Serial.println(y);

    // for Up
    if (x>=500 && y==1023)
    {
        Serial.println("Up Led is On");
       digitalWrite(up, HIGH);
    }else{
        digitalWrite(up, LOW);
    }
    
    // for down
    if (x>=500 && y==0)
    {
        Serial.println("DOWN Led is On");
       digitalWrite(bottom, HIGH);
    }else{
        digitalWrite(bottom, LOW);
    }
    
    // for right
    if (x==1023 && y>=495)
    {
        Serial.println("right Led is On");
       digitalWrite(right, HIGH);
    }else{
        digitalWrite(right, LOW);
    }
    // for left
    if (x==0 && y>=495)
    {
        Serial.println("LEFT Led is On");
       digitalWrite(left, HIGH);
    }else{
        digitalWrite(left, LOW);
    }
    

}