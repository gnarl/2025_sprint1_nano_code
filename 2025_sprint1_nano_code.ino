#include <Adafruit_NeoPixel.h>

#define NEOPIXEL_CONTROL_PIN 2
#define LED_COUNT  34
#define ROBORIO_COLOR_CONTROL_PIN_0 4
#define ROBORIO_COLOR_CONTROL_PIN_1 6

Adafruit_NeoPixel strip(LED_COUNT, NEOPIXEL_CONTROL_PIN, NEO_GRB + NEO_KHZ800);

const uint32_t WHITE = strip.Color(255, 255, 255);
const uint32_t BLUE = strip.Color(0, 0, 255);
const uint32_t RED = strip.Color(255, 0, 0);
const uint32_t GREEN = strip.Color(0, 255, 0);
uint32_t currentColor = GREEN;


void setup() {
  strip.begin();
  pinMode(ROBORIO_COLOR_CONTROL_PIN_0, INPUT_PULLUP);
  pinMode(ROBORIO_COLOR_CONTROL_PIN_1, INPUT_PULLUP);
}

void loop() {
  // Reset all pixels to off. Does not change LED color until show() is called.
  strip.clear();

  currentColor = readColorControlPins();
  // Set the first 4 LEDs to red
  for(int i=0; i<LED_COUNT; i++) {
    strip.setPixelColor(i, currentColor); 
  }
  strip.show();
  delay(100);
}

uint32_t readColorControlPins() {
  int pin0State = digitalRead(ROBORIO_COLOR_CONTROL_PIN_0);
  int pin1State = digitalRead(ROBORIO_COLOR_CONTROL_PIN_1);

  if (pin0State == LOW && pin1State == LOW) {
    return WHITE;
  } else if (pin0State == LOW && pin1State == HIGH) {
    return BLUE;
  } else if (pin0State == HIGH && pin1State == LOW) {
    return RED; 
  } else {
    return GREEN; 
  }
}
