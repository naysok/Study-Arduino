#define resetPin 12       //This is connected DIRECTLY to the Reset pin on the Arduino.



// void PIN_reset() {
//  Serial.println("PIN_RESET");
//  digitalWrite(12, LOW);
//}



void setup() {

  Serial.begin(9600);
  Serial.println("Hello");

}



void loop() {


  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);


  Serial.println("Reset(Before)");
  delay(500);


  Serial.println("PIN_RESET");
  delay(500);

  //--------------------------------THE RESET------------------------------------//
  pinMode(resetPin, OUTPUT);        //This "Activates" pin 12,                      //To allow each mode to change
  digitalWrite(resetPin, LOW);      //Puts the Reset pin LOW (as it needs),


  Serial.println("Reset(After)");
  delay(500);


}





