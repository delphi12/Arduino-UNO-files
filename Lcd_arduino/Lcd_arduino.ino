
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

void setup() {
  lcd.init();
      
  lcd.backlight();      // Make sure backlight is on
  for(int i= 0; i<= 3; i++)
{ 
  lcd.clear(); 
  lcd.setCursor(i,0); 
  lcd.print("Welcome to");
  delay(300); 
} 
  lcd.setCursor(0,1);
  lcd.print("Delphi's ElectroniClinic"); 
 
  delay(5000); 
  lcd.clear(); 
  lcd.print("Favourite Word?");
}

void loop() {

lcd.setCursor(4,1);
lcd.print("YOU");
//lcd.print(millis()/ 1000);  
 
   // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 7; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(500);
  }
 
  // scroll 16 positions (display length + string length) to the left
  // to move it back to center:
  for (int positionCounter = 7; positionCounter > 0; positionCounter--) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(500);
  }

}