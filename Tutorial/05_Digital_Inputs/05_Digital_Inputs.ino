const int ledPin = 4;
const int buttonApin = 2;
const int buttonBpin = 7;

void setup() {
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(digitalRead(2));
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
  
}
