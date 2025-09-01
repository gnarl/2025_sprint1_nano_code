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


## TODO
* Add a Capacitor: Place a large capacitor (1000µF, 6.3V or higher) across the 5V and GND terminals. 
* Add a Resistor: Connect a 300-500 Ohm resistor in series with the Green (Data) wire before it
     connects to the D2 terminal. This resistor helps protect the first NeoPixel from voltage
     spikes on the data line.
