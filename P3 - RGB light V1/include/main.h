#pragma once
#include <Arduino.h>

extern const int pinRed;
extern const int pinGreen;
extern const int pinBlue;

void setColor(int R, int G, int B);
void setup();
void loop();
