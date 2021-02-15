#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strand(64, 0);




int favorite = 0; 

void setup() {

  strand.begin();
  strand.clear();
  strand.setBrightness(10);

}

void loop() {
  for (int i = 0; i < strand.numPixels(); i++) {


strand.setPixelColor(i, 0, 0, 255);
  }
  strand.show();
delay(500);

}
