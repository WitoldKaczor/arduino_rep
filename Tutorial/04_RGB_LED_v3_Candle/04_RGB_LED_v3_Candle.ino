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
int redValue = 255;
int greenValue = 0;
int blueValue = 0;

// main loop
void loop()
{
  // only red
  analogWrite(RED, 255 - random(0, 100));
  delay(random(150, 300));
}
