// https://fabkura.gitbooks.io/arduino-docs/content/chapter17.html


void setup(){
  Serial.begin(9600);
  // pinMode(1,OUTPUT); //信号用ピン 6番ピン
  // pinMode(2,OUTPUT); //信号用ピン 5番ピン
}

void loop(){

  // PWM

  // モーターの強さ指定
  // int val = 25; //0~255の値にする
  // int val = 50 でも トルク 0
  // int val = 255; // out:3V // motor: 1.5~1.8
  // int val = 150; // out:5V // motor: 3.6~4.8
  int val = 125; // out:5V // motor: 3.


  // 信号1をHIGH, 信号2をLOW
  // digitalWrite(1,HIGH);
  // digitalWrite(2,LOW);


  //valが大きいほど出力値も大きくなる
  analogWrite( 3 , val ); //出力値:1~255


}
