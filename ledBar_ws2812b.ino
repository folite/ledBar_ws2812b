#include "FastLED.h"
#define NUM_LEDS 88
#define DATA_PIN 6
#define NUM_METEORS    8
#define  INCREASE_BRIGHTNESS  ( 256 / NUM_METEORS )
CRGB leds[NUM_LEDS];
void setup() {
  pinMode( POWER_PIN, OUTPUT );
  digitalWrite( POWER_PIN, HIGH );
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int i, j = 0;
  for( int i = 0; i < 88; i += 1 ){
    leds[j++].setHSV( i*3, 200, 50 );
    delay(50);
    FastLED.show();
    }

}
