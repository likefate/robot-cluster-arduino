// 조도 센서의 입력 핀
int sensorPin = 0;

void setup() {
  // 시리얼 통신 설정
  Serial.begin(9600);
}

void loop() {
  // 센서 값 읽기
  int sensorValue = analogRead(sensorPin);

  // 시리얼 모니터에 출력
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);
  delay(20);
}
