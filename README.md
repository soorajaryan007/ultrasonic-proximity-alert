# ultrasonic-proximity-alert
Ultrasonic Proximity Detection and Alert System
Here's a professional and clean `README.md` for your **Ultrasonic Proximity Detection and Alert System** GitHub project:

---

````markdown
# Ultrasonic Proximity Detection and Alert System

A microcontroller-based system using the HC-SR04 ultrasonic sensor and Arduino Uno R3 to detect nearby objects and trigger a buzzer alert when the distance falls below a specified threshold.

## 🚀 Features

- Measures distance using ultrasonic sensor (HC-SR04)
- Activates buzzer when object is detected within a user-defined range (e.g., <10 cm)
- Real-time distance output via Serial Monitor
- Simple, low-cost implementation using Arduino

## 🔧 Hardware Components

- Arduino Uno R3
- HC-SR04 Ultrasonic Sensor
- Active Buzzer
- Jumper Wires
- Breadboard

## 🔌 Circuit Connections

| Component    | Arduino Pin |
|--------------|-------------|
| HC-SR04 VCC  | 5V          |
| HC-SR04 GND  | GND         |
| HC-SR04 Trig | D9          |
| HC-SR04 Echo | D10         |
| Buzzer (+)   | D8          |
| Buzzer (−)   | GND         |

## 🧠 How It Works

1. The ultrasonic sensor emits an ultrasonic pulse.
2. It measures the time until the echo returns.
3. The distance is calculated based on time and speed of sound.
4. If the measured distance is below a set threshold (e.g., 10 cm), the buzzer is activated.

## 💻 Arduino Code

The complete Arduino sketch is in [`ultrasonic_alert.ino`](./ultrasonic_alert.ino).

```cpp
const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 8;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 10) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}
````

## 📷 Demo

*(Add a photo or video link of your working prototype here)*

## 📂 Project Structure

```
ultrasonic-proximity-alert/
│
├── ultrasonic_alert.ino    # Arduino sketch
├── README.md               # Project documentation
└── circuit_diagram.png     # (Optional) Wiring schematic
```

## 📄 License

This project is open-source under the [MIT License](LICENSE).

---

Feel free to fork, use, or improve this project. Contributions are welcome!

```

---

Would you like me to generate a circuit diagram image for this project as well?
```

