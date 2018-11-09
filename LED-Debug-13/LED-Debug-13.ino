#define LED_PIN 13
// int LED_PIN 13; // これでも同じ

int i = 0;
String msg;

void setup() {
  Serial.begin(9600); // これを書いておくと、シリアルモニタに値が返る  
  pinMode(LED_PIN, OUTPUT);

}

void loop() {

  msg = "i : " + String(i);
  Serial.println(msg);

  digitalWrite(LED_PIN, HIGH);
  Serial.println("high");
  delay(200);

  digitalWrite(LED_PIN, LOW);
  Serial.println("low");
  delay(1000);

  i++;

}
