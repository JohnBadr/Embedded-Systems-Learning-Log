#include "main.h"

#include <Arduino.h>
#include <PS4Controller.h>

const int motorA = 12;
const int motorB = 14;

void setup() {
  Serial.begin(115200);
  PS4.begin("A8:E2:91:4F:12:FC");
  Serial.println("Waiting for PS4 controller...");

  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
}

void loop() {
  if (PS4.isConnected()) {
    int ly = PS4.LStickY();

    // Deadzone
    if (abs(ly) < 10) {
      analogWrite(motorA, 0);
      analogWrite(motorB, 0);
    }
    else if (ly > 0) { // Forward aka clockwise, air blows on you
      analogWrite(motorA, map(ly, 10, 127, 0, 1023));
      analogWrite(motorB, 0);
    }
    else { // Reverse aka counterclockwise, air blows against you
      analogWrite(motorA, 0);
      analogWrite(motorB, map(abs(ly), 10, 127, 0, 1023));
    }

    Serial.println(ly);
  }
  delay(10);
}