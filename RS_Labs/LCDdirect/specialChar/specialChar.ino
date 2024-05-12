#include <LiquidCrystal.h>

//LCD 16x2 can display 32 characers(2 rows, 16 cols).Each char is composed of 40 pixels(8 rows, 5 cols)

LiquidCrystal lcd(12,11,5,4,3,2); //RS,EN,D4-D7
byte smile[8]={
	0b00000,
	0b00000,
	0b01110,
	0b10101,
	0b11011,
	0b10001,
	0b01010,
	0b00100
};

byte upArrow[8] = {
	0b00000,
	0b00100,
	0b01110,
	0b11111,
	0b00100,
	0b00100,
	0b00100,
	0b00100
};

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.createChar(0,smile);//special char creates, index=0
  lcd.createChar(1,upArrow);//index=1

  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Hello, Arduino");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,1);
  lcd.write(byte(0));// 0 indexed special char
  delay(2000);
  lcd.setCursor(5,1);
  lcd.write(byte(1));//1 ndexed special char
  delay(2000);
}
