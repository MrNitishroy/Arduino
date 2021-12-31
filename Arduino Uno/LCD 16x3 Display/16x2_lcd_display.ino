#include<LiquidCrystal.h>

LiquidCrastal lcd(rs,e,d4,d5,d6,d7)

void setup()
{
    lcd.begin(16,2);
    lcd.print("Welcome");
}
void loop()
{
    
}