// Enter a passcode as keystrokes. 
// LED is on before passcode is entered, and blinks afterward.

#include "mypasscode.h"

int led = 6;

// The setup routine runs once you press reset button

void setup() {
    pinMode(led, OUTPUT);
    digitalWrite(led, HIGH);
    delay(10000); // Delay 10 seconds, to allow host to setup USB
    Keyboard.print(MYPASSCODE); // password
    Keyboard.println("");
    digitalWrite(led, LOW);
    delay(1000);
}

void loop() {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
}
