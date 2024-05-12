#include <SoftwareSerial.h>
#include <Servo.h>

#define bttx 9
#define btrx 10
Servo myServo;
SoftwareSerial bluetooth(bttx,btrx);
int val=0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(11);
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bluetooth.available()>0)
  {
    val=bluetooth.read();
    Serial.println(val);
    myServo.write(val);

  }

}
