const int redPin = 9;    // 빨간색 LED의 핀 번호
const int greenPin = 10; // 초록색 LED의 핀 번호
const int bluePin = 11;  // 파란색 LED의 핀 번호

int i;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void loop() {
  for (i=0;i<256;i+=10){
    setColor(i,0,128);
    delay(100);
  }
  for (i=0;i<256;i+=10){
    setColor(255-i,0,128);
    delay(100);
  }
}
