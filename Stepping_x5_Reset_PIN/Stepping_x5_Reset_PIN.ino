#include <Stepper.h>

#define resetPin 12       //This is connected DIRECTLY to the Reset pin on the Arduino.

const int motor_steps = 2048;
unsigned long time;


#define resetPin 12       //This is connected DIRECTLY to the Reset pin on the Arduino.


// Stepper stepper1(motor_steps, 22, 26, 24, 28);
// Stepper stepper2(motor_steps, 30, 34, 32, 36);
// Stepper stepper3(motor_steps, 38, 42, 40, 44);
//  // Stepper stepper4(motor_steps, 23, 27, 25, 29);
// Stepper stepper5(motor_steps, 31, 35, 33, 37);




int roll_time = 30;
//int breaktime_Sec = 3;
int breaktime_Sec = 30;



int roll_count = roll_time / 3;
int breaktime = breaktime_Sec * 1000;


String tmp_roll = "roll_count : " + String(roll_count);
String tmp_roll_time = "roll_time_Sec : " + String(roll_time) + " Sec";
String tmp_break = "breaktime_Sec : " + String(breaktime_Sec) + " Sec";


void setup() {

  Serial.begin(9600);

  randomSeed(analogRead(0)); // 未接続ピンのノイズを利用


  Serial.println("\n- - -");
  Serial.println("print_info");
  Serial.println(tmp_roll);
  Serial.println(tmp_roll_time);
  Serial.println(tmp_break);
  Serial.println("- - -");


//   stepper1.setSpeed(10); // good
//   stepper2.setSpeed(10); // good
//   stepper3.setSpeed(10); // good
// // stepper4.setSpeed(10); // good
//   stepper5.setSpeed(10); // good

}



void loop() {


  digitalWrite(13, HIGH);

  int random_src = random(1000);
  int random_int = random_src % 4;

  Serial.println(random_int);

  if (random_int == 0){
    Serial.println("one");
    Stepper stepperX(motor_steps, 22, 26, 24, 28);
    stepperX.setSpeed(10); // good
    stepperX.step(2048 * roll_count * -1);
  }
  else if (random_int == 1){
    Serial.println("two");
    Stepper stepperX(motor_steps, 30, 34, 32, 36);
    stepperX.setSpeed(10); // good
    stepperX.step(2048 * roll_count * -1);
  }
  else if (random_int == 2){
    Serial.println("three");
    Stepper stepperX(motor_steps, 38, 42, 40, 44);
    stepperX.setSpeed(10); // good
    stepperX.step(2048 * roll_count * -1);
  }
  else if (random_int == 3){
    Serial.println("four");
    Stepper stepperX(motor_steps, 31, 35, 33, 37);
    stepperX.setSpeed(10); // good
    stepperX.step(2048 * roll_count * -1);
  }



  delay(breaktime);



  // 1
  // Serial.println("1");
  // stepper1.step(2048 * roll_count * -1);
  // delay(breaktime);

  // 2
  // Serial.println("2");
  // stepper2.step(2048 * roll_count * -1);
  // delay(breaktime);


  // 3
  // Serial.println("3");
  // stepper3.step(2048 * roll_count * -1);
  // delay(breaktime);


  // 4
  // Serial.println("4");
  // stepper4 .step(2048 * roll_count * -1);
  // delay(breaktime);

  // 5
  // Serial.println("5");
  // stepper5.step(2048 * roll_count * -1);
  // delay(breaktime);

  Serial.println("Reset(Before)");
  delay(500);

  // resetFunc(); //call reset
  Serial.println("PIN_RESET");
  delay(500);

  //--------------------------------THE RESET------------------------------------//
  pinMode(resetPin, OUTPUT);        //This "Activates" pin 12,                      //To allow each mode to change
  digitalWrite(resetPin, LOW);      //Puts the Reset pin LOW (as it needs),


  Serial.println("Reset(After)");
  delay(500);


  // time = millis();
  // Serial.println(time);


}



