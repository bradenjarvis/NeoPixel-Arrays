#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strand(64, 0);

#include "frames.h"

int colors[2][3] {
  {0, 0, 0},
  {0, 255, 0}
};

int whichFrame = 0;


void setup() {

  strand.begin();
  strand.clear();
  strand.setBrightness(10);

}

void loop() {
  for (int i = 0; i < strand.numPixels(); i++) {
    int whichColor = animation [whichFrame][i];



    int red = colors [whichColor] [0];
    int green = colors [whichColor] [1];
    int blue = colors [whichColor] [2];
    strand.setPixelColor(i, red, green, blue);
  }
  strand.show();
whichFrame = (whichFrame + 1) % 1;
  delay(500);
}
