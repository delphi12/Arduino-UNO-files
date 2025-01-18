//Blinking_LED 
const int ledPin =9; //Number of LED Pin 
void setup() {
  // initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn on LED
  delay(1000);
  digitalWrite(ledPin, LOW); // trun off LED
  delay(1000);
}
