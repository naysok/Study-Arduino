#define analog_pin 11
#define LED_PIN_B 3


int i = 0;
int t = 10;
int tmp;
int tmp_i;

void setup() {
  Serial.begin(9600);
  // pinMode(LED_PIN_A, OUTPUT);
  // pinMode(LED_PIN_B, OUTPUT);
}

void loop() {

  Serial.println(i);
  
  if (i>255){
    tmp = i/255;
    tmp_i = i - (255*tmp);
    analogWrite(analog_pin, tmp_i);
    delay(t);
    Serial.println(tmp_i);
  }
  else{
    analogWrite(analog_pin, i);
    delay(t);
    Serial.println(i);
  }
  

  Serial.println("---");
  i++;

}

