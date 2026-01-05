#include "main.h"

void setup() {
 pinMode(12, OUTPUT);
 pinMode(13, OUTPUT);
 pinMode(14, OUTPUT);
}

void loop() {
  
  digitalWrite(14, HIGH);
  delay(3000);
  digitalWrite(14, LOW);
  
  digitalWrite(13, HIGH);
  delay(1500);
  digitalWrite(13, LOW);

  digitalWrite(12, HIGH);
  delay(2500);
  digitalWrite(12, LOW);
}
