**Intro:**

I have used PWM to control an RGB LED to flash various kinds of color. When different PWM values are set to the R, G, and B pins of the LED, its brightness will be different. When the three different colors are mixed, we can see that the RGB LED flashes different colors

**Components:**

1) Breadboard
2) Ardunio UNO board
3) LED
4) Resistor (220 ohms)

**PWM:**

A call to analogWrite() is on a scale of 0 - 255, such that analogWrite(255) requests a 100% duty cycle (always on), and analogWrite(127) is a 50% duty cycle (on half the time) for example.

**RGB LED:**

RGB LED has 4 pins; the longest one is GND; the others are Red, Green and Blue. Touch its plastic shell and you will find a cut. The pin closest to the cut is the first pin, marked as Red, then GND, Green and Blue in turn

**Circuit Diagram:**

![Image](https://github.com/user-attachments/assets/dd4e4ed5-d174-464d-b237-f0e463fff58b)

