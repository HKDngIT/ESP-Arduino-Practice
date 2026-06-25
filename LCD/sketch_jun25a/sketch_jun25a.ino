#include <DIYables_LCD_I2C.h>

DIYables_LCD_I2C lcd(0x27, 16, 2); // I2C-Adresse 0x27, 16x2 LCD

void setup() {
  lcd.init();       // LCD initialisieren
  lcd.backlight();  // Hintergrundbeleuchtung einschalten
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hello");
  lcd.setCursor(2, 1);
  lcd.print("newbiely.com");
  delay(2000);

  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("DIYables");
  lcd.setCursor(0, 1);
  lcd.print("www.diyables.io");
  delay(2000);
}