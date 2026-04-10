// Uses AI (co pi) for logic planning and debugging assistance, w ai usage T_T

const int lightSensor = A0;
const int ledPin = 9;
const int buzzerPin = 8;

int lightValue;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

  // CSV header for data logging
  Serial.println("Time(ms),LightValue");
}

void loop() {
  lightValue = analogRead(lightSensor);

  // Turn LED and buzzer on/off based on light level
  if (lightValue < 300) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
  else if (lightValue < 600) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  // Log time and sensor value
  Serial.print(millis());
  Serial.print(",");
  Serial.println(lightValue);

  delay(1000); // Log once per second
}
