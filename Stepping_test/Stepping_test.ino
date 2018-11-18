#include <Stepper.h>

const int motor_steps = 2048;
unsigned long time;

Stepper stepper1(motor_steps, 8, 10, 9, 11);

void setup() {
  stepper1.setSpeed(20); // good
  
  // stepper.setSpeed(10); // slow


  
  Serial.begin(9600);
}

void loop() {
  time = millis();
  Serial.println(time);

  Serial.println("0");

  // stepper.step(-2048 * 5); // 15 sec // setSpeed(20);
  // stepper.step(-2048 * 2); // 6 sec // setSpeed(20);
  
  // stepper.step(-2048 * 1); // 3 sec // setSpeed(20);
  // stepper.step(-2048 * 1); // 6 sec // setSpeed(10);

  stepper1.step(2048 * 1); // 3 sec // setSpeed(20);
  
  // delay(ms)
  // 1,000ミリ秒 = 1秒
  // delay(500);

  Serial.println("1");

  
}

  
