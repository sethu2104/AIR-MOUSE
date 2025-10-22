# Air Mouse using MPU6050 and Arduino Uno

This project demonstrates how to create an Air Mouse using an MPU6050 accelerometer and gyroscope sensor with an Arduino Uno.  
The mouse movements are controlled by tilting the MPU6050 sensor, and the left click, right click, scroll up, and scroll down actions are triggered by four switches.  
The integration between Arduino programming (Arduino IDE) and Python (VS Code) is achieved via serial connection, with the `pyAutoGUI` library used to automate mouse movements.

## Components

- Arduino Uno
- MPU6050 sensor
- 4 push-button switches
- Breadboard and jumper wires
- USB cable for Arduino
- Computer with Arduino IDE and VS Code

## Libraries and Tools

- Arduino IDE
- Python 3.x
- `pySerial` library for Python
- `pyAutoGUI` library for Python
- `MPU6050` library for Arduino
