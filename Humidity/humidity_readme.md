**Humidity Sensor**

The DHT11 sensor is a digital sensor used to measure temperature and relative humidity

**Structure:**

Sensing Element for Humidity:

The sensor uses a capacitive humidity sensing element.
This element consists of two electrodes with a moisture-holding substrate between them.
When the substrate absorbs water vapor from the air, its capacitance changes.

Temperature Sensing:

The sensor has a thermistor (a temperature-sensitive resistor). The resistance of the thermistor changes with temperature.

Microcontroller:

An internal microcontroller processes the analog signals from the sensing elements and converts them into a digital output.

**Working Principle:**

Humidity Measurement:

The capacitive sensing element detects changes in capacitance caused by water vapor in the air.
The microcontroller calculates the relative humidity (RH) using these changes.

Temperature Measurement:

The thermistor measures temperature by detecting resistance variations due to temperature changes.
The microcontroller converts the resistance into a temperature value.

Data Output:

Both temperature and humidity values are sent as digital signals to the microcontroller or host device.
Communication occurs through a single-wire serial interface.


**Note:** I have used DHT11 in this project. Programming with DHT11 and DHT22 is similar, only the library is different. Install the required library from library manager. 

**Components:**

1) Arduino UNO
2) DHT11 sensor
3) Resistor - 10k ohms

**Circuit Diagram:**

![Image](https://github.com/user-attachments/assets/4d1b5598-3d81-4189-97f5-bd8c25f4395b)

| DHT11 Pin | Arduino Pin |
|--------|--------|
| GND | GND |
| VCC | 5v |
| DATA | 2 |
| NC | Ignore | 

**Output:**

Check the serial monitor for the readings