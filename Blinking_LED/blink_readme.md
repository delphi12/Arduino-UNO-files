**Blinking LED**

**Components:**

1) Breadboard
2) Ardunio UNO board
3) LED
4) Resistor (220 ohms)

**Principle:** 

Connect one end of the 220ohm resistor to pin 9 of the Uno and the other end to the anode (the long pin) of the LED, and the cathode (the short pin) of the LED to GND. When the pin 9 outputs high level, the current gets through the current limiting resistor to the anode of the LED. And since the cathode of the LED is connected to GND, the LED will light up. When pin 9 outputs low level, the LED goes out.

**Circuit Diagram:**

![Image](https://github.com/user-attachments/assets/30731ba0-6f43-4d19-b351-ebad40eac257)