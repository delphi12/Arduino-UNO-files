
const int redPin = 10;  // Red
const int greenPin = 9;  // Green 
const int bluePin = 8;  //Blue

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT); 
  pinMode(greenPin, OUTPUT); 
  pinMode(bluePin, OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  // Basic colors:  
  color(255, 0, 0); //red 
  delay(500);  
  color(0,255, 0); //green  
  delay(500);  
  color(0, 0, 255); //blue  
  delay(500); 
  
  // Example blended colors:  
  color(255,0,252); //red  
  delay(500);  
  color(237,109,0); //orange  
  delay(500);  
  color(255,215,0); //yellow  
  delay(500);  
  color(34,139,34); //green  
  delay(500); 
  color(0,112,255); //blue  
  delay(500); 
  color(0,46,90); // indigo 
  delay(500); 
  color(128,0,128); //purple  
  delay(500); 
}
void color (unsigned char red, unsigned char green, unsigned char blue)// the color generating function  
{    
  analogWrite(redPin, red);   
  analogWrite(greenPin, green); 
  analogWrite(bluePin, blue); 
}
