int LedPin = 12;
int buttonPin = 2;
int buttonPin2 = 3;
int buttonPin3 = 4;
//int buttonPin4 = 5;

int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;
//int buttonState4 = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(LedPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  //pinMode(buttonPin4, INPUT_PULLUP);
}
void loop() 
{
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  //buttonState4 = digitalRead(buttonPin4);

  Serial.print(buttonState);
  Serial.print(buttonState2);
  Serial.println(buttonState3);

  delay(100);
  //Serial.print(buttonState4);
}
