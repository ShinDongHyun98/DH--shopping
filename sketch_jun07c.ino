int buttonPin = 5;
int buttonLED = 12;
int button1State = 0;

void setup() 
{
Serial.begin (9600);
pinMode (buttonPin, INPUT);
pinMode (buttonLED, OUTPUT);
}

void loop() 
{
button1State = digitalRead(buttonPin);
Serial.print(", digital Value : ");
Serial.println (button1State);
  if (button1State == LOW) {
    digitalWrite (buttonLED, HIGH);
  }
  else {
    digitalWrite (buttonLED, LOW);
  }
delay(500);
}
