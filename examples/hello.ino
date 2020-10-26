#include <OLED_I2C.h>

OLED myOLED(SDA, SCL);
extern uint8_t SmallFont[];

void setup() {
  myOLED.begin(SSD1306_128X32);
  myOLED.setFont(SmallFont);
  myOLED.clrScr();
  myOLED.print("Hello, world!", CENTER, 0);
  myOLED.update();
}

void loop() { }