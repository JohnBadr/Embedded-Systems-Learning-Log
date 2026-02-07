#include "main.h"

long duration;
int distance;

const int trigPin = 12;
const int echoPin = 25;
const float speedOfSound = 0.034;
const int buzzerPin = 27;
const int light1 = 18, light2 = 16, light3 = 32;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(light3, OUTPUT);
  Serial.begin(115200);
  analogWriteResolution(12);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * speedOfSound / 2;

  Serial.println(distance);

  if (distance <= 10 && distance>1) { //zone 1 (closest)
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, HIGH);
    analogWrite(buzzerPin, 4000);
  } 
  else if (distance <= 20 && distance>10) { //zone 2 (middle)
    digitalWrite(light1, HIGH);
    digitalWrite(light2, HIGH);
    digitalWrite(light3, LOW);
    analogWrite(buzzerPin, 2000);
  } 
  else if (distance <= 30 && distance>20) { //zone 3 (farthest)
    digitalWrite(light1, HIGH);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    analogWrite(buzzerPin, 500);
  } 
  else {
    digitalWrite(light1, LOW);
    digitalWrite(light2, LOW);
    digitalWrite(light3, LOW);
    analogWrite(buzzerPin, 0);
  }

  delay(100);
}

