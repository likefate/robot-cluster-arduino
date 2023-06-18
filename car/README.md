# Flowchart
![car_flowchart_1](https://github.com/likefate/robot-cluster-arduino/blob/main/img/car_flowchart_1.png)
- 다음은 코드의 흐름도입니다.

# H-bridge
![hbridge_1](https://github.com/likefate/robot-cluster-arduino/blob/main/img/hbridge_1.png)
- H-bridge 회로는 하나의 전압으로 모터의 방향을 바꿀 수 있는 회로를 말합니다.<br>이를 통해 모터의 정방향 / 역방향 회전 제어가 가능합니다.
# H-bridge Table
| 방향 | MotorPinA | MotorPinB |
|:-:|:-:|:-:|
| 앞 | LOW | HIGH |
| 뒤 | HIGH | LOW |
| 좌 | LOW | HIGH |
| 우 | LOW | HIGH |
| 정지 | LOW | LOW |
