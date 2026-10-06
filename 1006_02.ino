#include <Altino.h>
Altino sensor;
byte data=0x01;
void setup() {
  // put your setup code here, to run once:
  Open();
  for (int i=0; i<8; i++)
  {
    DisplayLine(data,data,data,data,data,data,data,data);
    delay(1000);
    data=data<<1;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
