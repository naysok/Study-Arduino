#define LED_PIN_A 2
#define LED_PIN_B 3

// int LED_PIN 13; // これでも同じ

int i = 0;
int t = 200;

void setup() {
  pinMode(LED_PIN_A, OUTPUT);
  pinMode(LED_PIN_B, OUTPUT);
}

void loop() {
  if (i%15 ==0){
    digitalWrite(LED_PIN_A, HIGH);
    digitalWrite(LED_PIN_B, HIGH);
    delay(t);
    digitalWrite(LED_PIN_A, LOW);
    digitalWrite(LED_PIN_B, LOW);
    delay(t);
  }

  else if (i%3 == 0){
    digitalWrite(LED_PIN_A, HIGH);
    delay(t);
    digitalWrite(LED_PIN_A, LOW);
    delay(t);
  }

  else if (i%5 == 0){
    digitalWrite(LED_PIN_B, HIGH);
    delay(t);
    digitalWrite(LED_PIN_B, LOW);
    delay(t);
  }

  i++;
  Serial.print(i);
}

