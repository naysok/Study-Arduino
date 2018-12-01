#include <Stepper.h>

const int motor_steps = 2048;
unsigned long time;

Stepper stepper1(motor_steps, 22, 26, 24, 28);
Stepper stepper2(motor_steps, 30, 34, 32, 36);
Stepper stepper3(motor_steps, 38, 42, 40, 44);
Stepper stepper4(motor_steps, 23, 27, 25, 29);
Stepper stepper5(motor_steps, 31, 35, 33, 37);

  
int roll_time = 5;
//int breaktime_Sec = 3;
int breaktime_Sec = 2;



int roll_count = roll_time / 3;
int breaktime = breaktime_Sec * 1000;


String tmp_roll = "roll_count : " + String(roll_count);
String tmp_roll_time = "roll_time_Sec : " + String(roll_time) + " Sec";
String tmp_break = "breaktime_Sec : " + String(breaktime_Sec) + " Sec";


void setup() {

//  Serial.begin(9600);
  
  
  Serial.println("print_info");
  Serial.println(tmp_roll);
  Serial.println(tmp_roll_time);
  Serial.println(tmp_break);
  Serial.println("- - -");


  stepper1.setSpeed(10); // good
  stepper2.setSpeed(10); // good
  stepper3.setSpeed(10); // good
  stepper4.setSpeed(10); // good
  stepper5.setSpeed(10); // good
  

}



void loop() {

  // 1
  Serial.println("1");
  stepper1.step(2048 * roll_count);
  delay(breaktime);

  // 2
  Serial.println("2");
  stepper1.step(2048 * roll_count);
  delay(breaktime);


  // 3
  Serial.println("3");
  stepper1.step(2048 * roll_count);
  delay(breaktime);


  // 4
  Serial.println("4");
  stepper1.step(2048 * roll_count);
  delay(breaktime);

  // 5
  Serial.println("5");
  stepper1.step(2048 * roll_count);
  delay(breaktime);



//  time = millis();
//  Serial.println(time);

  
}

  
