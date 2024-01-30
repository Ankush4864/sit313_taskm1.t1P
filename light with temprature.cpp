const int temperatureSensorPin = A0;  // Analog pin for temperature sensor simulation
const int ledPin = 2;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Simulate temperature reading (adjust the values as needed)
  int sensorValue = analogRead(temperatureSensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureCelsius = (voltage - 0.5) * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperatureCelsius);
  Serial.println(" °C");

  // Check if the temperature is higher than 20 degrees Celsius
  if (temperatureCelsius > 20.0) {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }

  delay(1000);
}
