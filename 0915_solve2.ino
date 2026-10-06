#include <Altino.h>
Altino sensor;
void setup() {
  // put your setup code here, to run once:
  Open();
  Steering(127);
  Led(0x0002);
  delay(2000);
  Steering(0);
  Led(0);
  Led(0x0003);
  delay(2000);
  Steering(-127);
  Led(0);
  Led(0x0001);
  delay(2000);
  Steering(0);
  Led(0);
  Led(0x000C);
  delay(2000);
  Led(0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
