# Study-Arduino  



### index  

- LED-Debug-13 // Lチカ  

- LED-x3 // Lチカ x3  

- Test-pySerial // Python ←→ Arduino でのシリアル通信  
  - Test-Send  
    - Test-Send.ino  
  - Send-01.py // Sender + Reader  

- [pySerial.md](https://github.com/naysok/Study-Arduino/blob/master/pySerial.md) // pySerial memo  



---  

---  

### Arduino のデバッグ  

13 番ピンは、ボードに乗ったデバッグ用の LED  
いわゆるLチカです。  

``` c
#define LED_PIN 13
// int LED_PIN 13; // これでも同じ

void setup() {
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  // Serial.println("high");
  delay(200);

  digitalWrite(LED_PIN, LOW);
  // Serial.println("low");
  delay(1000);
}
```
