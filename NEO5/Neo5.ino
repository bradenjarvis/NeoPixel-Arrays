#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strand(64, 0);


int favorite = 0;

void setup() {

  strand.begin();
  strand.clear();
  strand.setBrightness(10);

}
void colorWipe(uint32_t color, int wait) {
  for (int i = 0; i < strand.numPixels(); i++) {
    strand.setPixelColor(i, color);
    strand.show();
    delay(wait);
  }
}
void loop() {

  colorWipe(strand.Color(0,   255,   255), 50); // Red
  colorWipe(strand.Color(  0, 0,   0), 50);

  strand.show();
  delay(500);

}
