#include <Altino.h> // 알티노를 제어할 수 있는 함수를 포함한 헤더파일
Altino sensor; //알티노 센서 구조체 선언, 단, 구조체 이름은 같아야 한다.

void setup() {
  // put your setup code here, to run once:
  Open (); //시리얼 통신,타이머
  Go(300,300); //알티노 300 속도로 전진
  delay(1000); //1초간 지연
  Go(0,0); //알티노 멈춤
}

void loop() {
  // put your main code here, to run repeatedly:

}
