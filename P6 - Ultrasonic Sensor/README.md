# P6 - Ultrasonic Distance Sensor & Proximity Indicator Project

## Overview
This project uses an HC-SR04 ultrasonic distance sensor with an ESP32 to measure distance and trigger multi-zone visual and audio feedback. As objects move closer, additional LEDs illuminate and a buzzer increases in intensity/pitch.

## Hardware used
- ESP32 Max V1.0 Development Board
- HC-SR04 Ultrasonic Distance Sensor
- 3 LEDs (Zone indicators)
- 1 Buzzer
- 3 Resistors (for the LEDs)
- Breadboard and jumper wires

## Circuit Design
- Ultrasonic Trigger Pin → Pin 12
- Ultrasonic Echo Pin → Pin 25
- LED 1 (Zone 3 - Far) → Pin 18
- LED 2 (Zone 2 - Medium) → Pin 16
- LED 3 (Zone 1 - Close) → Pin 32
- Buzzer Signal Pin → Pin 27
- Sensor VCC/GND → 5V/GND

## Software
See [main.cpp](https://github.com/JohnBadr/Embedded-Systems-Learning-Log/blob/main/P6%20-%20Ultrasonic%20Sensor/src/main.cpp) for the full code.

## Learning Outcomes
This project helped me develop practical embedded systems skills:  
- Triggered ultrasonic sensor pulses and calculated time-of-flight measurements using `pulseIn()` and `delayMicroseconds()`  
- Converted microsecond duration values into distance in centimeters using the speed of sound  
- Configured custom PWM output resolution (`analogWriteResolution(12)`) on the ESP32  
- Implemented multi-stage conditional zone logic to control external indicators based on sensor range  
- Generated dynamic audio tone feedback via PWM signals sent to a buzzer