const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 8;
const int ledPin = 7;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Clear trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Trigger pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Print distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 10) {
    digitalWrite(buzzerPin, HIGH); // Turn buzzer ON
    digitalWrite(ledPin, HIGH);    // Turn LED ON
  } else {
    digitalWrite(buzzerPin, LOW);  // Turn buzzer OFF
    digitalWrite(ledPin, LOW);     // Turn LED OFF
  }

  delay(500);
}
