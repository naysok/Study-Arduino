#include <Stepper.h>

const int motor_steps = 2048;
unsigned long time;

Stepper stepper1(motor_steps, 4, 6, 5, 7);
Stepper stepper2(motor_steps, 8, 10, 9, 11);


  
int roll_time = 120;
//int breaktime_Sec = 3;
int breaktime_Sec = 360;





int roll_count = roll_time / 3;
int breaktime = breaktime_Sec * 1000;


String tmp_roll = "roll_count : " + String(roll_count);
String tmp_roll_time = "roll_time_Sec : " + String(roll_time) + " Sec";
String tmp_break = "breaktime_Sec : " + String(breaktime_Sec) + " Sec";


void setup() {

  Serial.begin(9600);
  
  
  Serial.println("print_info");
  Serial.println(tmp_roll);
  Serial.println(tmp_roll_time);
  Serial.println(tmp_break);
  Serial.println("- - -");


  stepper1.setSpeed(20); // good
  stepper2.setSpeed(20); // good
  
  // stepper.setSpeed(10); // slow
  

}

void loop() {



  Serial.println("1");
//  stepper1.step(2048 * 1); // 3 Sec // setSpeed(20);
  stepper1.step(2048 * roll_count);
// stepper1.step(2048 * 0.25);
  delay(breaktime);


  // 2
  Serial.println("2");
  stepper2.step(2048 * roll_count);
//  stepper2.step(2048 * 0.25);
  delay(breaktime);


  // 3
  Serial.println("3");
  delay(breaktime);


  // 4
  Serial.println("4");
  delay(breaktime);


  // 5
  Serial.println("5");
  delay(breaktime);


  time = millis();
  Serial.println(time);
  
}

  
