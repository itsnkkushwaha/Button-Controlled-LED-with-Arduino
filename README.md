# Button-Controlled LED with Arduino

This project demonstrates controlling an LED using a button and an Arduino board. When the button is pressed, the LED turns on; when it is released, it turns off.

## Hardware Requirements:
- Arduino Board (e.g., Uno, Mega, etc.)
- 1 LED
- 1 Push Button
- 1 Resistor (220 ohm for LED)
- Jumper wires
- Breadboard

## How It Works:
**Connections:**

- Connect the positive terminal (long pin) of the LED to Pin 13 (through a resistor if the LED is not 5 Volts). 
- Connect the negative terminal of the LED to GND (Ground). 
- Connect one terminal of the push button to Pin 7 and the other terminal to GND.
  
 ## Functionality:

- When the button is pressed, Arduino reads a HIGH Signal, and the LED turns ON.
- When the button is released, the signal is LOW, and the LED turns OFF.


