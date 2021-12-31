#include<LiquidCrystal.h>
#define rs 13
#define e 12
#define d4 4
#define d5 5
#define d6 6
#define d7 7
LiquidCrystal lcd(rs,e,d4,d5,d6,d7);

void setup()
{
    lcd.begin(16,2);
    lcd.print("Welcome");
}
void loop()
{
    lcd.setCursor(0,1);//(C,R)
    lcd.print("Welcome");
}