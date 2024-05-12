#include <Servo.h>

#define potpin A0;
int val=0;

Servo myServo;
void setup() {
  // put your setup code here, to run once:

  myServo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(potpin);
  val=map(val,0,1023,0,180);//map val from scale of 1024(analog signals of 10 bit) to a scale of 180(as servo moves 180 degrees)
  myServo.write(val);
  delay(50);

}
