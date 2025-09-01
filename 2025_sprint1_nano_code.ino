#include <Adafruit_NeoPixel.h>

#define NEOPIXEL_CONTROL_PIN 2
#define LED_COUNT  4

Adafruit_NeoPixel strip(LED_COUNT, NEOPIXEL_CONTROL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  
}

void loop() {
  // Reset all pixels to off. Does not change LED color unitl show() is called.
  strip.clear();

  // Set the first 4 LEDs to red
  for(int i=0; i<LED_COUNT; i++) {
    strip.setPixelColor(i, strip.Color(255, 0, 0)); // Red
  }
  strip.show();
  delay(1000); // Keep them on for 1 second

  // Turn the LEDs off
  for(int i=0; i<LED_COUNT; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0)); // Off
  }
  strip.show();
  delay(1000); // Wait 1 second
}