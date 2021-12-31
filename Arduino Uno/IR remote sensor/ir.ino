#include <IRremote.h> // include the IRremote library
int ir=2;
IRrecv receiver(ir); // create a receiver object of the IRrecv class
decode_results results; // create a results object of the decode_results class
unsigned long key_value = 0; // variable to store the pressed key value

void setup() {
  Serial.begin(9600); // begin serial communication with a baud rate of 9600
  receiver.enableIRIn(); // enable the receiver
  receiver.blink13(true); // enable blinking of the built-in LED when an IR signal is received
}

void loop() {
  if (receiver.decode(&results)) {
    if (results.value == 0XFFFFFFFF) {
      results.value = key_value;
    }
    Serial.println(results.value, HEX);

    key_value = results.value;
    receiver.resume();
  }
}