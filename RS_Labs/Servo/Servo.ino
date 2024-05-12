#include <Servo.h>

Servo myServo;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=180;i+10) // 10 degree step at a time
  {
    myServo.write(i);
    delay(500);
  }

}
