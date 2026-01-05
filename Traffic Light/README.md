# Mini Traffic Light Project

## Overview
This project simulates a traffic light using three LEDs controlled by an ESP32.  
The sequence cycles through green (3s), blue (1.5s), and red (2.5s) lights.  

## Hardware used
- ESP32 Max V1.0 Development Board
- 3 LEDs: green, blue, red
- 3 220Ω resistors (one for each LED)
- Breadboard and jumper wires

## Circuit Design
- Green LED → Pin 14
- Blue LED → Pin 13
- Red LED → Pin 12
- All LED cathodes connected to the same GND row

Each LED has its own resistor to limit current and protect the ESP32 pins.  
Multiple LEDs can safely share a single GND pin, but each output pin must remain separate.

## Software
See  [main.cpp](https://github.com/JohnBadr/Embedded-Systems-Learning-Log/blob/main/Traffic%20Light/main.cpp) for the full code.

## Learning Outcomes
This project helped me develop practical embedded systems skills:  
- Controlled multiple LEDs using digital I/O on the ESP32  
- Applied resistors correctly to limit current to LEDs  
- Understood the difference between `HIGH` and `LOW` states  
- Learned timing control using `delay()`  
- Gained hands-on experience wiring multiple LEDs efficiently  
