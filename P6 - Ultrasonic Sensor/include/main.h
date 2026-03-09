#pragma once
#include <Arduino.h>

extern int distance;
extern long duration;

extern const int trigPin;
extern const int echoPin;
extern const int buzzerPin;
extern const int light1;
extern const int light2;
extern const int light3;
extern const float speedOfSound;

void setup();
void loop();
