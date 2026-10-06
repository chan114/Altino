#include <Altino.h>
Altino sensor;
void setup() {
  // put your setup code here, to run once:
  Open();
  Go(300,300);
  Sound(39);
  Led(0x0003);
  delay(2000);
  Sound(0);
  Go(0,0);
  Led(0);
  Led(0x000C);
  delay(2000);
  Sound(50);
  Go(-300,-300);
  Led(0xC000);
  delay(2000);
  Go(0,0);
  Led(0);
  Sound(0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
