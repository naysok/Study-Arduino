# Study-Arduino  



### index  

- LED-Debug-02 // Lチカ

- LED-Debug-13 // 13版はオンボードのLED, Lチカ  

- LED-x3 // Lチカ x3  

- LED-analogWrite // PWM(Plus Width Modulation：パルス幅変調)出力を使って、光る強さの制御  


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

Serial.println() でシリアルモニタに値を返す  
これには、setup() 内で、 Serial.begin(9600); と書いておく必要がある  

``` c
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

/*
out

i : 0
high
low
i : 1
high
low
i : 2
high
low
i : 3
high
low
i : 4
high
low
.
.
.


*/
```


---  


###
