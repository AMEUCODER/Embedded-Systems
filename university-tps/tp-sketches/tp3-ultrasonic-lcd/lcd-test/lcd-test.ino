// Source: TP3, Part A step 4 (minimal LCD test) - ISET Mahdia
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);   // Adapter l'adresse !

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("LCD OK !");
  lcd.setCursor(0, 1);
  lcd.print("TP Ultrason");
}

void loop() {}
