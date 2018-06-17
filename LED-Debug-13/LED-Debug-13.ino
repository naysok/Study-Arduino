#define LED_PIN 13
// int LED_PIN 13; // これでも同じ

void setup() {
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("high");
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  Serial.println("low");
  delay(1000);

}

