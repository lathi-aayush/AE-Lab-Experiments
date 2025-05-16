#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  

String text = "I am Aayush   ";  

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print(text);  
  delay(1000);      
}

void loop() {
  lcd.scrollDisplayLeft();  
  delay(300);               
}
