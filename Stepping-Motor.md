# Stepping-Motor.md  


Arduino でステッピングモータを回す  
stepper というヘッダファイルを使うと簡単  

```cpp
#include <Stepper.h>

```

[https://www.arduino.cc/en/Reference/Stepper](https://www.arduino.cc/en/Reference/Stepper)  


---  

### テスト  

1個回す  

```cpp
#include <Stepper.h>

const int motor_steps = 2048;

Stepper stepper1(motor_steps, 8, 10, 9, 11);

void setup() {
  stepper1.setSpeed(20);
  Serial.begin(9600);
}

void loop() {


  Serial.println("0");

  stepper1.step(2048 * 5);

  Serial.println("1");

}



```


---  


### 失敗  

ステッピングモータを、5個稼働させた。（回路は並列）  
電流不足  


---  

### Ref  

Arduino 日本語リファレンス - Stepperライブラリのサンプルコード  
[http://www.musashinodenpa.com/arduino/ref/index.php?f=1&pos=259](http://www.musashinodenpa.com/arduino/ref/index.php?f=1&pos=259)  


