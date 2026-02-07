#include "main.h"

int ledPin = 12;
int buttonPin = 17;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  if(digitalRead(buttonPin) == HIGH){
    digitalWrite(ledPin, HIGH);
  }

  else{
    digitalWrite(ledPin, LOW);
  }

}
