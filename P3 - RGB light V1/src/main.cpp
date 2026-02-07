#include "main.h"

const int pinRed = 18;
const int pinGreen = 23;
const int pinBlue = 14;

void setColor(int R, int G, int B){
  analogWrite(pinRed, R);
  analogWrite(pinGreen, G);
  analogWrite(pinBlue, B);
}

void setup() {
  pinMode(pinRed,OUTPUT);
  pinMode(pinGreen,OUTPUT);
  pinMode(pinBlue,OUTPUT);
}

void loop() {
  setColor(255, 0, 0); //sets color to RED
  delay(500);
  setColor(0, 255, 0); //sets color to GREEN
  delay(500);
  setColor(0, 0, 255); //sets color to BLUE
  delay(500);
}
