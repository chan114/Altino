#include <Altino.h>
Altino sensor;
void setup() {
  // put your setup code here, to run once:
  Open();
  Display('A');
  delay(1000);
  Display(0);
  delay(1000);
  Displayon(1,1);
  delay(1000);
  Displayoff(1,1);
  delay(1000);
  for(int x=1;x<9;x++)
  {
    Displayon(x,1);
    delay(1000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
