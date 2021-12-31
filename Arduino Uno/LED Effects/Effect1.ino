#define b1_ye1 8
#define b1_y2 5
#define b1_red 4
#define b1_green 9
#define b2_green 2
#define b2_yell 3
#define b2_red 7
#define b2_blue 6
int d=300;


void setup() {
  pinMode(b1_ye1,OUTPUT);
  pinMode(b1_y2,OUTPUT);
  pinMode(b1_red,OUTPUT);
  pinMode(b1_green,OUTPUT);
  pinMode(b2_green,OUTPUT);
  pinMode(b2_yell,OUTPUT);
  pinMode(b2_red,OUTPUT);
  pinMode(b2_blue,OUTPUT);
  digitalWrite(b1_ye1,HIGH);
  digitalWrite(b1_y2,HIGH);
  digitalWrite(b1_red,HIGH);
  digitalWrite(b1_green,HIGH);
  digitalWrite(b2_green,HIGH);
  digitalWrite(b2_yell,HIGH);
  digitalWrite(b2_red,HIGH);
  digitalWrite(b2_blue,HIGH);
  digitalWrite(b1_ye1,LOW);
  digitalWrite(b1_y2,HIGH);
  digitalWrite(b1_red,LOW);
  digitalWrite(b1_green,HIGH);
  digitalWrite(b2_green,LOW);
  digitalWrite(b2_yell,HIGH);
  digitalWrite(b2_red,LOW);
  digitalWrite(b2_blue,HIGH);

  // put your setup code here, to run once:

}

void loop() {
//   digitalWrite(b1_ye1,HIGH);
//   digitalWrite(b1_y2,HIGH);
//   digitalWrite(b1_red,HIGH);
//   digitalWrite(b1_green,HIGH);
//   digitalWrite(b2_green,HIGH);
//   digitalWrite(b2_yell,HIGH);
//   digitalWrite(b2_red,HIGH);
//   digitalWrite(b2_blue,HIGH);

//   // 1st Effect
//    digitalWrite(b1_ye1,LOW);
//   digitalWrite(b1_y2,HIGH);
//   digitalWrite(b1_red,LOW);
//   digitalWrite(b1_green,HIGH);
//   digitalWrite(b2_green,LOW);
//   digitalWrite(b2_yell,HIGH);
//   digitalWrite(b2_red,LOW);
//   digitalWrite(b2_blue,HIGH);

//   // all off
// digitalWrite(b1_ye1,LOW);
//   digitalWrite(b1_y2,LOW);
//   digitalWrite(b1_red,LOW);
//   digitalWrite(b1_green,LOW);
//   digitalWrite(b2_green,LOW);
//   digitalWrite(b2_yell,LOW);
//   digitalWrite(b2_red,LOW);
//   digitalWrite(b2_blue,LOW);

  // 2nd effect
//   digitalWrite(b1_ye1,HIGH);
//   digitalWrite(b1_green,HIGH);
//   digitalWrite(b2_green,HIGH);
//   digitalWrite(b2_yell,HIGH);
//   delay(500);
//   digitalWrite(b2_green,LOW);
//   digitalWrite(b2_yell,LOW);
//   digitalWrite(b1_ye1,LOW);
//   digitalWrite(b1_green,LOW);
//   digitalWrite(b1_y2,HIGH);
//   digitalWrite(b1_red,HIGH);
//   digitalWrite(b2_red,LOW);
//   digitalWrite(b2_blue,LOW);
//   delay(500);
//    digitalWrite(b1_y2,LOW);
//   digitalWrite(b1_red,LOW);
//   digitalWrite(b2_red,HIGH);
//   digitalWrite(b2_blue,HIGH);
//   delay(500);


//  digitalWrite(b1_ye1,HIGH);
//   digitalWrite(b1_green,HIGH);

//   delay(700);

//   digitalWrite(b1_y2,HIGH);
//   digitalWrite(b1_red,HIGH);

//   delay(700);
//   digitalWrite(b2_red,HIGH);
//   digitalWrite(b2_blue,HIGH);
//   delay(700);
//   digitalWrite(b2_green,HIGH);
//   digitalWrite(b2_yell,HIGH);
// delay(700);
// digitalWrite(b1_ye1,LOW);
//   digitalWrite(b1_y2,LOW);
//   digitalWrite(b1_red,LOW);
//   digitalWrite(b1_green,LOW);
//   digitalWrite(b2_green,LOW);
//   digitalWrite(b2_yell,LOW);
//   digitalWrite(b2_red,LOW);
//   digitalWrite(b2_blue,LOW);

  // put your main code here, to run repeatedly:


  digitalWrite(b1_y2,HIGH);
  digitalWrite(b1_red,HIGH);
   digitalWrite(b2_green,LOW);
  digitalWrite(b2_yell,LOW);
  delay(d);
  digitalWrite(b2_red,HIGH);
  digitalWrite(b2_blue,HIGH);
  digitalWrite(b1_y2,LOW);
  digitalWrite(b1_red,LOW);
  delay(d);
    digitalWrite(b1_ye1,HIGH);
  digitalWrite(b1_green,HIGH);
   digitalWrite(b2_red,LOW);
  digitalWrite(b2_blue,LOW);
  delay(d);
  digitalWrite(b2_green,HIGH);
  digitalWrite(b2_yell,HIGH);
     digitalWrite(b1_ye1,LOW);
  digitalWrite(b1_green,LOW);
  delay(d);

}