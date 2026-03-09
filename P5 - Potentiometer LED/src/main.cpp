#include "main.h"

const int pmeterPin = 33;

void setup() {
  pinMode(pmeterPin,INPUT);
  pinMode(16,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(pmeterPin);
  float voltage = sensorValue * (3.3/4095.0);

  analogWrite(16,sensorValue);

  Serial.println(sensorValue);
  Serial.println(voltage);

  delay(1); #comment 
}