//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display


// Pines a usar con Arduino Mega
// Desde la pantalla LCD:
// GND --> GND
// VCC --> 5V
// SDA --> 20 (SDA 20)
// SCL --> 21 (SCL 21)

void setup()
{
  lcd.init(); 
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hola Mundo");
  lcd.setCursor(0,1);
  lcd.print("en Arduino");
}


void loop(){
  
}
