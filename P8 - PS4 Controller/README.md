# P8 - PS4 Controller Bluetooth Interface

A mini-project demonstrating wireless Bluetooth communication between a Sony PS4 DualShock 4 
controller and an ESP32 microcontroller.

## Overview
The ESP32 spoofs the host Bluetooth MAC address to pair with the PS4 controller, then reads 
and processes all controller inputs in real time — including analog joysticks, pressure-sensitive 
triggers, and digital buttons.

## Features
- Wireless PS4 controller pairing via Bluetooth classic
- Real-time input reading: dual joysticks, triggers (0–255), and all digital buttons
- Deadzone filtering on joystick axes to eliminate stick drift
- Clean Serial output — only prints active inputs

## Hardware
- ACEBOTT ESP32 Max V1.0 (DOIT ESP32 DEVKIT V1)
- Sony PS4 DualShock 4 Controller

## Software
- Framework: Arduino (PlatformIO)
- Library: [PS4-ESP32 by aed3](https://github.com/aed3/PS4-esp32)

## Skills Demonstrated
- Bluetooth classic communication on ESP32
- Real-time peripheral input processing
- Deadzone filtering and input normalization