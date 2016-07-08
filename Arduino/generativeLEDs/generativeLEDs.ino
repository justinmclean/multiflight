#include <FastLED.h>

#define LED_COUNT 60
struct CRGB leds[LED_COUNT];

#define PIN_BUTTON 10
#define PIN_IO_A   7
#define PIN_IO_B   11
#define PIN_SIGNAL 13
#define PIN_INPUT  10

byte shift1 = 12;
byte shift2 = 8;
byte shift3 = 4;
byte mask = 63;
int spread = 1000;

byte gen(int t)
{ 
  return t * ((t >> shift1 | t >> shift2) & mask & t >> shift3);
}

void setup()
{
  LEDS.addLeds<WS2812B, PIN_SIGNAL, GRB>(leds, LED_COUNT);
  LEDS.showColor(CRGB(0, 0, 0));
  LEDS.setBrightness(50);
  LEDS.show();
}

void loop()
{
  for (int t = 0;;t++) {

    for (int i = 0; i < 60; i++) {
      int base = t + i*3;
      byte r = gen(base);
      byte g = gen(base + spread);
      byte b = gen(base + 2* spread);
      leds[i] = CRGB(r,g,b);
    }

    LEDS.show();

    delay(10);
  }
}


