#include <Adafruit_NeoPixel.h>

#define NEOPIXEL_CONTROL_PIN 2
#define LED_COUNT  4

Adafruit_NeoPixel strip(LED_COUNT, NEOPIXEL_CONTROL_PIN, NEO_GRB + NEO_KHZ800);

const uint32_t BLUE = strip.Color(0, 0, 255);
const uint32_t RED = strip.Color(255, 0, 0);
const uint32_t GREEN = strip.Color(0, 255, 0);
uint32_t currentColor = GREEN;


void setup() {
  strip.begin();
}

void loop() {
  // Reset all pixels to off. Does not change LED color until show() is called.
  strip.clear();

  // Set the first 4 LEDs to red
  for(int i=0; i<LED_COUNT; i++) {
    strip.setPixelColor(i, currentColor); // Red
  }
  strip.show();
  delay(1000); // Keep them on for 1 second
  changeColor();

  strip.clear();
  strip.show();
  delay(1000); // Wait 1 second
}

void changeColor() {
  if (currentColor == GREEN) {
    currentColor = BLUE;
  } else if (currentColor == BLUE) {
    currentColor = RED;
  } else {
    currentColor = GREEN;
  }
}