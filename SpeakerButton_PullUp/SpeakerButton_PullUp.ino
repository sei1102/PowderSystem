
//ボタンのピン
const int buttonPin = 7;
//スピーカと接続するピン
const int speakerPin = 11;

int buttonState = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(speakerPin,OUTPUT);

}

void loop() {
//  //ボタンの入力を受けとる
//  int buttonState = digitalRead(buttonPin);
//  if(lastButtonState == LOW && buttonState == HIGH ){
//    onPress();
//  }
  buttonState = digitalRead(buttonPin);
  if(buttonState == LOW ){
    onPress();
  }

 delay(10);

}

void onPress(){
  //下と一緒(簡単Ver)
  tone(speakerPin,220,100);


//  for(int i=0; i<100;i++){
//    //1msごとのHIGHとLOWの繰り返しで1000Hzをつくる
//    digitalWrite(speakerPin,HIGH);
//    delayMicroseconds(500);
//    digitalWrite(speakerPin,LOW);
//    delayMicroseconds(500);
//  }
}

