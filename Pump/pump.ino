/*
  This code defines and initializes two pins for a centrifugal pump and sets 
  the speed of one of the pump pins to HIGH and the other to LOW, causing the 
  pump to spin in one direction. After 5 seconds, the pump turns off.
*/

// Define the pump pins
const int motorB_1A = 9;
const int motorB_2A = 10;


void setup() {

  pinMode(motorB_1A, OUTPUT);  // set pump pin 1 as output
  pinMode(motorB_2A, OUTPUT);  // set pump pin 2 as output

  digitalWrite(motorB_1A, HIGH); 
  digitalWrite(motorB_2A, LOW);

  delay(1000);// wait for 5 seconds

  digitalWrite(motorB_1A, LOW);  // turn off the pump
  digitalWrite(motorB_2A, LOW);

}

void loop() {

}
