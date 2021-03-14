#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 149

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 23
#define CLOCK_PIN 22

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
      // Uncomment/edit one of the following lines for your leds arrangement.
      // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
      FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  	  //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
      // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);

      // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);

      // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      //  FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    FastLED.setBrightness(255);
  // Turn the LED on, then pause

  for(int i=0;i<149;i++){
    // Start firt shelf
    if (i < 37) {
      leds[i] = 0x086ACC;
    } else if (i < 50) {
      leds[i] = 0x6600CC;
    // Start second shelf
    } else if (i < 89) {
      leds[i] = 0xCCCCCC;
    } else if (i < 99) {
      if (i % 3) {
        leds[i] = 0x00D900;
      } else {
        leds[i] = 0xA5CC00;
      }
    // Start third shelf
    } else if (i < 119) {
      leds[i] = CRGB::SkyBlue;
    } else if (i < 131) {
      leds[i] = 0xFFFF00;
    } else if (i < 138) {
      leds[i] = 0xC20A22;
    } else if (i < 142) {
      leds[i] = 0x0000BA;
    } else if (i < 150) {
      leds[i] = 0xC20A22;
      // Start fourth shelf
    } else if (i < 199) {
      leds[i] = 0xCCCCCC;
    }
  }

  // RGB Test
  // for(int i=0;i<149;i++){
  //   if (i < 50) {
  //     leds[i] = 0x00FF00;
  //   } else if (i < 99) {
  //     leds[i] = 0x0000FF;
  //   } else if (i < 149) {
  //     leds[i] = 0xFF0000;
  //   } else if (i < 199) {
  //     leds[i] = 0xFFFFFF;
  //   }
  // }

  FastLED.show();
}

void loop() {
  for(int i=0;i<149;i++){
    // Start firt shelf
    if (i < 37) {
      leds[i] = 0x086ACC;
    } else if (i < 50) {
      leds[i] = 0x6600CC;
    // Start second shelf
    } else if (i < 89) {
      leds[i] = 0xCCCCCC;
    } else if (i < 99) {
      if (i % 3) {
        leds[i] = 0x00D900;
      } else {
        leds[i] = 0x63D400;
      }
    // Start third shelf
    } else if (i < 119) {
      leds[i] = CRGB::SkyBlue;
    } else if (i < 131) {
      leds[i] = 0xFFFF00;
    } else if (i < 138) {
      leds[i] = 0xC20A22;
    } else if (i < 142) {
      leds[i] = 0x0000BA;
    } else if (i < 150) {
      leds[i] = 0xC20A22;
      // Start fourth shelf
    } else if (i < 199) {
      leds[i] = 0xCCCCCC;
    }
  }
  FastLED.show();
  delay(1000);
  for(int i=0;i<149;i++){
    // Start firt shelf
    if (i < 37) {
      leds[i] = 0x086ACC;
    } else if (i < 50) {
      leds[i] = 0x6600CC;
    // Start second shelf
    } else if (i < 89) {
      leds[i] = 0xCCCCCC;
    } else if (i < 99) {
      if (i % 3) {
        leds[i] = 0x63D400;
      } else {
        leds[i] = 0x00D900;
      }
    // Start third shelf
    } else if (i < 119) {
      leds[i] = CRGB::SkyBlue;
    } else if (i < 131) {
      leds[i] = 0xFFFF00;
    } else if (i < 138) {
      leds[i] = 0xC20A22;
    } else if (i < 142) {
      leds[i] = 0x0000BA;
    } else if (i < 150) {
      leds[i] = 0xC20A22;
      // Start fourth shelf
    } else if (i < 199) {
      leds[i] = 0xCCCCCC;
    }
  }
  FastLED.show();
  delay(1000);
}
