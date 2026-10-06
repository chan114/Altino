#include <Altino.h>
Altino sensor;
void setup() {
  // put your setup code here, to run once:
  Open ();
  Go (500,500);
  delay (2000);
  Go (-500,-500);
  delay (3000);
  Go (0,0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
