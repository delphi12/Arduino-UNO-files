
#define LDR_PIN A0
void setup() {
  Serial.begin (9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  delay(5000);

}
