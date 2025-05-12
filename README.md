# ultrasonic-proximity-alert
Ultrasonic Proximity Detection and Alert System
# Ultrasonic Proximity Detection and Alert System

A microcontroller-based embedded system using the HC-SR04 ultrasonic sensor and Arduino Uno R3 to measure the distance of nearby objects and trigger both audio (buzzer) and visual (LED) alerts when a threshold is crossed.

## 🚀 Features

- Real-time distance measurement using ultrasonic sensor
- Buzzer and LED alert when an object is within a critical range
- Simple, low-cost setup ideal for learning embedded systems
- Serial output for monitoring measured distances

## 🔧 Hardware Components

- Arduino Uno R3
- HC-SR04 Ultrasonic Sensor
- Active Buzzer
- LED (1x)
- 220Ω Resistor (for LED)
- Breadboard and jumper wires
- USB Cable for Arduino programming

## ⚙️ Circuit Overview

- **Ultrasonic Sensor**: Sends and receives ultrasonic pulses to calculate object distance.
- **Buzzer**: Provides an audible alert when the object is too close.
- **LED**: Provides a visual indication when the object is detected within a certain range.
- **Threshold**: Default set to 10 cm (can be adjusted in code).

## 🔌 Pin Connections

| Component    | Arduino Pin |
|--------------|-------------|
| HC-SR04 VCC  | 5V          |
| HC-SR04 GND  | GND         |
| HC-SR04 Trig | D9          |
| HC-SR04 Echo | D10         |
| Buzzer (+)   | D8          |
| Buzzer (−)   | GND         |
| LED (+)      | D7          |
| LED (−)      | GND (via 220Ω resistor) |

## 📋 How It Works

1. The HC-SR04 sensor emits an ultrasonic pulse.
2. It listens for the echo and calculates the distance using the time delay.
3. If the distance is below a predefined threshold (e.g., 10 cm), the system activates the buzzer and LED.
4. The distance is also printed to the Serial Monitor for real-time tracking.

## 📂 Project Structure


## 🧪 Possible Applications

- Obstacle detection for robotics
- Safety systems in automation
- Smart parking sensors
- Proximity-based alarms

Feel free to clone, modify, or contribute to the project!

