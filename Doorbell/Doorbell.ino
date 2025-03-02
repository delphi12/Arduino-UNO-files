const int buttonPin = 2; //connect the button to pin2
const int buzzerPin = 8;//connect the led to pin8

int buttonState = 0;         // variable for reading the push button status

void setup()
{
  pinMode(buttonPin, INPUT); //initialize the buttonPin as input
  pinMode(buzzerPin, OUTPUT); //initialize the buzzerpin as output
}
/**********************************/
void loop()
{
  unsigned char i; //define a variable
  
  //read the state of the button value
  buttonState = digitalRead(buttonPin);

  //and check if the button is pressed
  //if it is,the state is HIGH
  if (buttonState == HIGH )
  {
    for (i = 0; i < 50; i++)
    {
      digitalWrite(buzzerPin, HIGH);  //Let the buzzer beep.
      delay(3);//wait for 3ms
      digitalWrite(buzzerPin, LOW);  //Stop the buzzer.
      delay(3);//wait for 3ms
    }
     for (i = 0; i < 80; i++)
    {
      digitalWrite(buzzerPin, HIGH);
      delay(5);//wait for 5ms
      digitalWrite(buzzerPin, LOW);
      delay(5);//wait for 5ms
    }
  }
}
