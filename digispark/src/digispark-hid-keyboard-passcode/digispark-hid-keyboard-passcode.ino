// Enter a passcode as keystrokes. No newline is included.
// LED is on before passcode is entered, and blinks afterward.

#include "mypasscode.h"
#include "DigiKeyboard.h"

#define LED 1 // For digispark revs 2 & 4, as well as the counterfeit "rev 3"

void setup() {
    pinMode(LED, OUTPUT);
    digitalWrite(LED, HIGH); // Turn the led on
    DigiKeyboard.delay(10000); // Delay 10 seconds, to allow host to setup USB
    DigiKeyboard.print(MYPASSCODE); // Password defined in mypasscode.h
    digitalWrite(LED, LOW); // Turn the led off
    DigiKeyboard.delay(1000); // Delay 1 second
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}
