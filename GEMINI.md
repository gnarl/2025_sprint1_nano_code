# Project Overview

This is an Arduino project for a Nano V3.0 board. The file `2025_sprint1_nano_code.ino` is the main sketch file. The image `nano_v3_nano_term_adapter_v1.PNG` shows the hardware setup, which includes an Arduino Nano V3.0 board with a terminal adapter.

# Building and Running

To build and run this project, you will need the Arduino IDE.

1.  Open the Arduino IDE.
2.  Open the `2025_sprint1_nano_code.ino` file.
3.  Connect your Arduino Nano to your computer.
4.  Select `Arduino Nano` as the board from the `Tools` menu.
5.  Select `ATmega328P (Old Bootloader)` as the processor from the `Tools` menu.
6.  Click the `Upload` button to build and upload the sketch to the board.

## Determine Arduino Port
1. Before connecting the Nano V3.0 via USB run `ls /dev/cu.*` to display the existing ports.
2. Connect the Nano v3.0 via USB, wait for board to initialize, an run `ls /dev/cu.*` again.
3. Set the newly discovered port in the `Tools` menu of the Arduino IDE. 

# Development Conventions

*   The main source code is in the `.ino` file.
*   The `setup()` function is used for initialization.
*   The `loop()` function is used for the main program logic.


