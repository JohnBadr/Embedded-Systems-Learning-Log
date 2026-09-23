# RGB LED Color Cycle Project

## Overview
This project controls a common cathode RGB LED using an ESP32 to cycle through primary colors (Red, Green, Blue) at fixed intervals. It uses Pulse Width Modulation (PWM) via `analogWrite()` to output specific color values.

## Hardware used
- ESP32 Max V1.0 Development Board
- 1 RGB LED (Common Cathode)
- 3 Resistors (to limit current per channel)
- Breadboard and jumper wires

## Circuit Design
- Red Anode Pin → Pin 18
- Green Anode Pin → Pin 23
- Blue Anode Pin → Pin 14
- Common Cathode Pin → GND

Each color pin uses a dedicated resistor to protect the ESP32 GPIO pins from overcurrent.

## Software
See [main.cpp](https://github.com/JohnBadr/Embedded-Systems-Learning-Log/blob/main/P3%20-%20RGB%20light%20V1/src/main.cpp) for the full code.

## Learning Outcomes
This project helped me develop practical embedded systems skills:  
- Used `analogWrite()` on the ESP32 to send PWM signals to individual color channels  
- Created a helper function (`setColor()`) to abstract multi-pin control into simple RGB inputs  
- Configured GPIO pins as outputs using `pinMode()`  
- Managed precise state timing between color changes using `delay()`  
- Understood how to drive a multi-pin RGB LED component on a breadboard