//A4 SDA default(HIGH) 
//A5 SCL default(HIGH) 
//Steps in I2C communication

//Start Bit(LOW)
//Device Address
//R/W
//Ack
//Send Data
//ACK
//Stop Bit(HIGH)

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Hello, World");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Signing off!");
  delay(5000);
  lcd.clear();
  lcd.print("Shutting down");
  delay(5000);
  lcd.clear();
  lcd.noBacklight();
}
