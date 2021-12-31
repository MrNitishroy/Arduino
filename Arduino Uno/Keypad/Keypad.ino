#include <Keypad.h>
const byte ROWS =4;
const byte COLS =4;
int a=0;
int b=0;
int sum;
char Keys[ROWS][COLS]
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS]={2,3,4,5};
byte colPins[COLS]={6,7,8,9};

Keypad customeKeypad =Keypad(makeKeymap(Keys) , rowPins , colPins , ROWS , COLS );
void setup()
{
  Serial.begin(9600);
  
}
void loop()
{
char customKey = customeKeypad.getKey();

if(customKey)
{
  Serial.print("Enter One  value");
  char a =customKey;
   Serial.println(customKey);
  Serial.print(a);

  
 
};
}