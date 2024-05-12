//_aryan_05_05
//Liquid Crystal
// display contrast pin (Vo), power supply pins (+5V and Gnd) and LED Backlight (Bklt+ and BKlt-) pins that you can use to power the LCD, control the display contrast, and turn on and off the LED backlight, respectively.

//LCD panel connections
//VSS -GND
//VDD -5V
//Vo PWM/POT (for contrast control)
//R/W pin: mode (GND if W to LCD from Arduino, 5V if R from LCD to Arduino) we connect to digital pin, our code shifts it as instructed
//RS pin: Register Select- GND for command mode(cursor move etc.) and 5V for data mode(just  display code)- we connect to digital pin, our code shifts it as instructed
//E: enable pin: enables writing to registers
//D4-D7:data pins(switch H,L)

//Potentiometer Connections
//pot: R/W- C,5V - VCC, GND- Vo

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2); //RS, E, D4, D5, D6, D7
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2); //16 cols, 2 rows
  pinMode(A0,INPUT); //optional as Analog are always for INPUT

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hello, Arduino");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("I am LCD");


}
