#include <LiquidCrystal.h>
int ct=9;//contrast pin
LiquidCrystal lcd(12,11,5,4,3,2); //RS, EN, D4, D5, D6, D7
void setup() {
  // put your setup code here, to run once:
  analogWrite(ct,50); // write this if pot is not used, for pot rotate knob as required
  lcd.begin(16,2);
  lcd.print("Hello, Arduino");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int pos=0;pos<14;pos++) //14 is length of the string "Hello, Arduino" (to wipe out from left)
  {
    lcd.scrollDisplayLeft();
    delay(400);
  }
  for(int pos=0;pos<30;pos++) //14+16(length of string +length of the display) to wipe out from right
  {
    lcd.scrollDisplayRight();
    delay(400);
  }
}
