// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

// define variables
int redValue;
int greenValue = 0;
int blueValue;

// main loop
void loop()
{
  #define delayTime 300 // fading time between colors
  
  redValue = 255;
  blueValue = 0;
  analogWrite(RED, redValue);
  analogWrite(BLUE, blueValue);
  delay(delayTime);

  redValue = 0;
  blueValue = 255;
  analogWrite(RED, redValue);
  analogWrite(BLUE, blueValue);
  delay(delayTime);
}
