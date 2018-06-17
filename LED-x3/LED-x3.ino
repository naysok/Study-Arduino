#define LED_PIN1 10
#define LED_PIN2 9
#define LED_PIN3 8
#define t HIGH

int h = 255;

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
}


void loop() {
  digitalWrite(LED_PIN1, h);
  delay(t);

  digitalWrite(LED_PIN1, LOW);
  delay(t);

  digitalWrite(LED_PIN2, h);
  delay(t);

  digitalWrite(LED_PIN2, LOW);
  delay(t);

  digitalWrite(LED_PIN3, h);
  delay(t);

  digitalWrite(LED_PIN3, LOW);
  delay(t);

}

