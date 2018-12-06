const int LED_PIN = 13;
const int breaktime = 1000; // 1Sec

int i = 0;

// declare reset fuction at address 0
void(* resetFunc) (void) = 0;


void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(i);

  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, HIGH);
  delay(breaktime);
  digitalWrite(LED_PIN, LOW);
  delay(breaktime);

  i++;


  const int Before = 111;
  const int After = 999;

//  Serial.println(Before);
  Serial.println("Reset(Before)");
  delay(breaktime);

  resetFunc(); //call reset

//  Serial.println(After);
  Serial.println("Reset(After)");
  delay(breaktime);



}
