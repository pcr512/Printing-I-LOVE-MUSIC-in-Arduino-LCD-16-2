#include <LiquidCrystal.h>;

// initialize the library
LiquidCrystal lcd(7,8,9,10,11,12);

byte heart[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b01110,
  0b11111,
  0b11111,
  0b01110,
  0b00100
};
byte i[8] = {
  0b11111,
  0b11111,
  0b01110,
  0b01110,
  0b01110,
  0b01110,
  0b11111,
  0b11111
};
byte music[8] = {
  0b00000,
  0b00001,
  0b00011,
  0b00101,
  0b01001,
  0b01011,
  0b11011,
  0b11000
};

void setup() 
{
  lcd.begin(16, 2);

  // create a new custom character
  lcd.createChar(0,heart);
lcd.createChar(1,music);
  // set up number of columns and rows
  
lcd.setCursor(2, 0);

  // Print a message to the lcd.
  lcd.print("I ");
  
  lcd.setCursor(6, 0);
  lcd.write(byte(0)); // when calling lcd.write() '0' must be cast as a byte
lcd.setCursor(10,0);
  lcd.write((byte)1);

  //lcd.write((uint8_t)0);
}


void loop() {
  // Turn off the display:
  lcd.noDisplay();
  delay(800);
  // Turn on the display:
  lcd.display();
  delay(800);
}
