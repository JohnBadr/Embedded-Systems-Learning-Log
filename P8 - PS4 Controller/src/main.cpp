#include "main.h"

void setup() {
  Serial.begin(115200);
  PS4.begin("A8:E2:91:4F:12:FC");
  Serial.println("Waiting for PS4 controller...");
}

void loop() {
  if (PS4.isConnected()) {
    bool anythingPressed = false;

    // Joysticks - ignore if under 10 (deadzone)
    if (abs(PS4.LStickX()) > 10) { Serial.print("LX:"); Serial.print(PS4.LStickX()); Serial.print(" "); anythingPressed = true; }
    if (abs(PS4.LStickY()) > 10) { Serial.print("LY:"); Serial.print(PS4.LStickY()); Serial.print(" "); anythingPressed = true; }
    if (abs(PS4.RStickX()) > 10) { Serial.print("RX:"); Serial.print(PS4.RStickX()); Serial.print(" "); anythingPressed = true; }
    if (abs(PS4.RStickY()) > 10) { Serial.print("RY:"); Serial.print(PS4.RStickY()); Serial.print(" "); anythingPressed = true; }

    // Triggers - only print if pressed
    if (PS4.L2Value() > 0) { Serial.print("L2:"); Serial.print(PS4.L2Value()); Serial.print(" "); anythingPressed = true; }
    if (PS4.R2Value() > 0) { Serial.print("R2:"); Serial.print(PS4.R2Value()); Serial.print(" "); anythingPressed = true; }

    // Buttons - only print if pressed
    if (PS4.Cross())    { Serial.print("[X] ");  anythingPressed = true; }
    if (PS4.Circle())   { Serial.print("[O] ");  anythingPressed = true; }
    if (PS4.Triangle()) { Serial.print("[^] ");  anythingPressed = true; }
    if (PS4.Square())   { Serial.print("[S] ");  anythingPressed = true; }
    if (PS4.Up())       { Serial.print("[UP] ");    anythingPressed = true; }
    if (PS4.Down())     { Serial.print("[DOWN] ");  anythingPressed = true; }
    if (PS4.Left())     { Serial.print("[LEFT] ");  anythingPressed = true; }
    if (PS4.Right())    { Serial.print("[RIGHT] "); anythingPressed = true; }
    if (PS4.L1())       { Serial.print("[L1] "); anythingPressed = true; }
    if (PS4.R1())       { Serial.print("[R1] "); anythingPressed = true; }

    if (anythingPressed) Serial.println();
  }
  delay(100);
}
