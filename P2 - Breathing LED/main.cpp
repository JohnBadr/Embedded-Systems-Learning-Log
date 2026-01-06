#include "main.h"

const int breathingLedPin = 18;
int brightness = 0;
int increments = 40; // the higher this value, the faster the breathing

void setup() {
  pinMode(breathingLedPin, OUTPUT); // I know it's not necessary to put this in analogwrite but makes it easier to track the pins
  
  analogWriteResolution(12); // to set the resolution to 12-bit (max supported by my board)
}

void loop() {
  for (brightness = 0; brightness < 4095; brightness += increments) {
    analogWrite(breathingLedPin, brightness);
    delay(10);
  }

  for (brightness = 4095; brightness > 0; brightness -= increments) {
    analogWrite(breathingLedPin, brightness);
    delay(10);
  }
}
