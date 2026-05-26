/*
raindrop module analog output

🔌 Wiring
Rain Sensor Module	Arduino	Notes
VCC	5V	Power supply
GND	GND	Ground
DO (digital out)	D2 (example)	HIGH when dry, LOW when wet
AO (analog out)	A0 (optional)	Returns analog moisture level

*/

#define RAIN_SENSOR_AO_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int rainValue = analogRead(RAIN_SENSOR_AO_PIN);
  Serial.print("Water drop level: ");
  Serial.println(rainValue); // 0 (wet) to 1023 (dry)
  delay(1000);
}
