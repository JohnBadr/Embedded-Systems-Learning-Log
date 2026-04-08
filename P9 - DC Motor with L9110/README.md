# P9 - PS4 Controller DC Motor Control

A mini-project demonstrating DC motor control via a Sony PS4 DualShock 4 controller over 
Bluetooth.

## Overview
Building on the Bluetooth foundation from P8, this project adds real-time DC motor control 
using the L9110 motor driver. The left joystick's Y-axis controls both the speed and direction 
of the motor, with deadzone filtering to prevent unintended movement at rest.

## Features
- Wireless PS4 controller input over Bluetooth classic
- Variable speed control mapped from joystick axis to PWM output (0–1023)
- Forward and reverse direction control via L9110 H-bridge
- Deadzone filtering to prevent motor drift at joystick rest position

## Hardware
- ACEBOTT ESP32 Max V1.0 (DOIT ESP32 DEVKIT V1)
- Sony PS4 DualShock 4 Controller
- L9110 DC Motor Driver
- DC Motor
- 6x AA Battery Pack

## Software
- Framework: Arduino (PlatformIO)
- Library: [PS4-ESP32 by aed3](https://github.com/aed3/PS4-esp32)

## Skills Demonstrated
- H-bridge motor driver wiring and control
- PWM speed control with variable resolution
- Joystick input mapping and scaling with deadzone filtering
- Multi-component power management (separate logic and motor power)