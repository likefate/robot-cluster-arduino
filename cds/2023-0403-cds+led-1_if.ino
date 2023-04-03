// 조도 센서의 입력 핀
int sensorPin = 0;

void setup() {
  // 시리얼 통신 설정
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // 센서 값 읽기
  int sensorValue = analogRead(sensorPin);

  // 시리얼 모니터에 출력
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);
  if (sensorValue>=930){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  else if (sensorValue>=800){
    digitalWrite(2, HIGH);  
  }else if (sensorValue >= 500){ 
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(4, HIGH);
  }
  delay(20);
  digitalWrite(2, LOW);  
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
