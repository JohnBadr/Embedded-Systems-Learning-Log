# Servo Motor Sweep Project

## Overview
This project controls a servo motor using an ESP32 to continuously sweep back and forth across a 180-degree range of motion at a smooth, constant speed.

## Hardware used
- ESP32 Max V1.0 Development Board
- 1 Servo Motor (e.g., SG90 micro servo)
- Breadboard and jumper wires

## Circuit Design
- Servo Signal (Yellow/Orange) → Pin 18
- Servo VCC (Red) → 5V
- Servo GND (Black/Brown) → GND

## Software
See [main.cpp](https://github.com/JohnBadr/Embedded-Systems-Learning-Log/blob/main/P7%20-%20Positional%20Servo%20Motor/src/main.cpp) for the full code.

## Learning Outcomes
This project helped me develop practical embedded systems skills:  
- Interfaced a positional servo motor using the ESP32 `Servo` library  
- Controlled exact angular positions ($0^\circ$ to $180^\circ$) via PWM pulse control  
- Implemented step-by-step position sweeping using iterative `for` loops  
- Managed motion speed and smoothness using incremental delay timing