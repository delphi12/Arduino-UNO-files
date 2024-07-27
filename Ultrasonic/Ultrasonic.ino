
#include <DHT.h>
#include <DHT_U.h>
#include "DHT.h"


#define LDR_PIN A0
#define DHT11_PIN 2

DHT dht11(DHT11_PIN, DHT11);

int trigPin = 9;    // TRIG pin
int echoPin = 8;    // ECHO pin

String humidity;
String temperature;
String ldr;

float duration_us, distance_cm;

void setup() {
  // begin serial port
  Serial.begin (9600);
  //Serial.begin(115200);

  dht11.begin();
  // configure the trigger pin to output mode
  pinMode(trigPin, OUTPUT);
  // configure the echo pin to input mode
  pinMode(echoPin, INPUT);

}

void loop() {

 // generate 10-microsecond pulse to TRIG pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(echoPin, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;

  // print the value to Serial Monitor
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  delay(2000);

  // read humidity
  float humi  = dht11.readHumidity();
  // read temperature as Celsius
  float tempC = dht11.readTemperature();
  // read temperature as Fahrenheit
  float tempF = dht11.readTemperature(true);

  // check if any reads failed
  if (isnan(humi) || isnan(tempC) || isnan(tempF)) {
    Serial.println("Failed to read from DHT11 sensor!");
  } 
  else {

    humidity = "Humidity: " + String(humi) + "%" ;
    Serial.println(humidity); 
    temperature = "Temperature: " + String(tempC) +"°C ~ "+ String(tempF) +" °F" ;
    Serial.println(temperature);
  }

  int ldrValue = analogRead(LDR_PIN);
  ldr = "LDR Value: " + String(ldrValue) + " ohm";
  Serial.println(ldr);
  delay(5000);

}
