#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int dely = 250;

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  lcd.begin (16,2);
  lcd.setCursor(0, 0);
  lcd.print("PEPE FANSIGN");
  lcd.setCursor(0, 1);
  lcd.print("0W0");
}

void loop() {

}
