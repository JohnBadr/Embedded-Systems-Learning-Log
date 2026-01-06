# Breathing LED (PWM) Project

## Overview
This project implements a breathing LED effect using an ESP32.  
The LED smoothly fades in and out by gradually changing its brightness using PWM (Pulse Width Modulation).

---

## Hardware Used
- ESP32 Max V1.0 board by Acebott
- 1 LED  
- 1 × 220Ω resistor  
- Breadboard and jumper wires  

---

## Circuit Design
- LED anode → GPIO 18 (PWM output)  
- LED cathode → GND  
- A 220Ω resistor is placed in series with the LED to limit current

GPIO 18 was chosen because it supports PWM output on the ESP32.

---

## Software Design
The LED brightness is controlled using `analogWrite()` with a 12-bit resolution, allowing values from `0` to `4095`.

Two `for` loops are used:
- One to gradually increase brightness  
- One to gradually decrease brightness  

A small delay is added inside each loop to ensure the brightness changes occur at a rate visible to the human eye.

See [main.cpp](https://github.com/JohnBadr/Embedded-Systems-Learning-Log/blob/main/P2%20-%20Breathing%20LED/main.cpp) for the full implementation.

---

## Learning Outcomes
- Learned about `for` loops.
- Understood Pulse Width Modulation.
- Learned that `delay()` is critical for timing because, without it, changes can happen too quickly for the human eye to perceive.

