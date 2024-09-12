# LED Sequence Project

This is a simple Arduino project that controls 6 LEDs in sequence. The LEDs turn on and off one after the other with a short delay in between.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- 6 LEDs
- 6 resistors (220Ω recommended)
- Breadboard and jumper wires

## Circuit

Connect the LEDs to the following digital pins on the Arduino:

- LED 1 -> Pin 6
- LED 2 -> Pin 5
- LED 3 -> Pin 4
- LED 4 -> Pin 3
- LED 5 -> Pin 2
- LED 6 -> Pin 1

Each LED should also be connected to ground via a resistor.

## Code

The code turns each LED on and off sequentially with a 100ms delay between each state change. 
