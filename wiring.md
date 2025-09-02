# Project Wiring

## Adafruit NeoPixel LED strip

The NeoPixel LED strip contains the following wires:

* Red (x2): +5V Power
* White (x2): Ground (GND)
* Green (x1): Data Input (DIN). This is the signal wire for the LEDs.



## Nano V3.0

We're using a Nano V3.0 as the Arduino microcontroller and mounting the Nano board to a Nano Terminal Adapter v1.0. 

### Wiring for Testing

For testing during code development, we'll provide power with the USB connection to the Nano.

* Red Wires (+5V): Connect both red wires to the 5V terminal.
* White Wires (GND): Connect both white wires to any of the GND terminals. 
* Green Wire (DIN): Connect the green wire to the D2 terminal. This will be the digital pin used
     to send data to the LEDs.

### Wiring with roboRio

**NeoPixel to VRM**

* Red NeoPixel wire to VRM 5V/2A
* White NeoPixel wire to VRM 5V/2A GND

**NeoPixel to Nano V3.0**
* Red NeoPixel wire to Nano +5V terminal
* White NeoPixel wire to Nano GND terminal
* Green NeoPixel wire to Nano D2 terminal

**roboRio to Nano V3.0**
* Orange: roboRio DIO 0 signal pin to Nano D4 terminal
* Yellow: roboRio DIO 1 signal pin to Nano D6 terminal
* Black: roboRio DIO 0 GND pin to Nano GND terminal

