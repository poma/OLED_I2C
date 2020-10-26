# OLED_I2C

This library has been made to make it easy to use 128x32 and 128x64 pixel OLED displays based on the SSD1306 controller chip with an Arduino, chipKit, ESP8266 or ESP32.

[Homepage](http://www.rinkydinkelectronics.com/library.php?id=79)
[PDF Documentation](http://www.rinkydinkelectronics.com/resource/OLED_I2C/OLED_I2C.pdf)

Example usage

```c
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
```