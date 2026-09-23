# P5 - Potentiometer Analog Input & LED Control

## Overview
This project reads an analog voltage signal from a potentiometer using an ESP32 ADC pin and converts it into a voltage level. It continuously outputs the raw reading and calculated voltage over Serial while mirroring the raw value to an LED pin.

## Hardware used
- ESP32 Max V1.0 Development Board
- 1 Potentiometer
- 1 LED
- 1 220Ω resistor (for the LED)
- Breadboard and jumper wires

## Circuit Design
- Potentiometer Signal (Wiper Pin) → Pin 33
- LED Anode → Pin 16
- LED Cathode → GND
- Potentiometer Outer Pins → 3.3V and GND

The potentiometer acts as a variable voltage divider connected to an analog-to-digital converter (ADC) pin on the ESP32.

## Software
See [main.cpp](https://github.com/JohnBadr/Embedded-Systems-Learning-Log/blob/main/P5%20-%20Potentiometer%20LED/src/main.cpp) for the full code.

## Learning Outcomes
This project helped me develop practical embedded systems skills:  
- Read continuous analog signals using `analogRead()` on an ADC-capable GPIO pin  
- Converted raw 12-bit ADC values ($0-4095$) to real voltage values ($0-3.3\text{V}$)  
- Configured Serial communication at 9600 baud for real-time data monitoring and debugging  
- Controlled LED output behavior directly using analog sensor inputs