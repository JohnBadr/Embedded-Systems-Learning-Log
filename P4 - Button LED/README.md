# P4 - Button-Controlled LED Project

## Overview
This project controls an LED using a tactile push button input on an ESP32. The LED lights up only while the button is actively pressed (`HIGH` state) and turns off when released.

## Hardware used
- ESP32 Max V1.0 Development Board
- 1 LED
- 1 Push Button
- 1 220Ω resistor (for the LED)
- 1 Pull-down resistor (or external resistor for the button input)
- Breadboard and jumper wires

## Circuit Design
- LED Anode → Pin 12
- Push Button Signal → Pin 17
- LED Cathode → GND

The LED uses a current-limiting resistor, and the button circuit reads digital logic levels directly into the input pin.

## Software
See [main.cpp](https://github.com/JohnBadr/Embedded-Systems-Learning-Log/blob/main/P4%20-%20Button%20LED/src/main.cpp) for the full code.

## Learning Outcomes
This project helped me develop practical embedded systems skills:  
- Configured GPIO pins as both `INPUT` and `OUTPUT` using `pinMode()`  
- Read digital input signals using `digitalRead()` to capture real-time user input  
- Applied simple conditional logic (`if`/`else`) to map button state directly to LED output state  
- Understood digital high/low state changes driven by physical push-button interactions