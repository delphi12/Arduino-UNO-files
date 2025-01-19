# Ultrasonic sensor with Arduino

This project is to connect Ultrasonic sensor(HC-SR04) with Arduino. The ultrasonic sensor is a device that can measure distances using sound waves . It works in a similar way than bats and dolphins - by emitting sound waves and listening them bound back . 

**Working Principle:**

The sensor consists of two primary components: a *transmitter and a receiver*. 

- The transmitter is responsible for emitting a high-frequency sound. Ultrasonic refers to frequencies beyond the range of the human hearing - so something higher than 20kHz.

- When the sound wave hits an object, it bounces back like echo. This returning wave is detected by the receiver. 

- The sensor will use the micro-controller (Arduino) internal clock to find out how much it took for the sound to bounce back. 
- This small clock turns on when a high-frequency wave is emitted and turns off when its echo is detected. 
- Distance Calculation: Using the speed of sound (approximately 343 m/s in air at room temperature), the sensor calculates the distance using the formula:

  - Distance = Time of Flight × Speed of Sound / 2

​
The division by 2 accounts for the round trip of the sound wave.

**Circuit Diagram:**

![Image](https://github.com/user-attachments/assets/a9094866-fce1-44c4-b14f-1753121501be)

**Output:**

Check the serial monitor for the disctance readings

