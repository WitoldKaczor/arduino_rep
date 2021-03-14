

/************************
Exercise the motor using
the L293D chip
************************/

#define ENABLE 5
#define DIRA 3
#define DIRB 4

int i;
 
void setup() {
  //---set pin direction
  pinMode(ENABLE,OUTPUT);
  pinMode(DIRA,OUTPUT);
  pinMode(DIRB,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  //digitalWrite(ENABLE,HIGH);
  //analogWrite(ENABLE,255);
  analogWrite(ENABLE,220);
  digitalWrite(DIRA,HIGH);
  digitalWrite(DIRB,LOW);
  delay(1000);
  digitalWrite(DIRA,LOW);
  digitalWrite(DIRB,HIGH);
  delay(1000);
  //digitalWrite(ENABLE,LOW);
  analogWrite(ENABLE,0);
  delay(3000);
  
//  Serial.println("One way, then reverse");
//  digitalWrite(ENABLE,HIGH); // enable on
//  for (i=0;i<5;i++) 
//  {
//    digitalWrite(DIRA,HIGH); //one way
//    digitalWrite(DIRB,LOW);
//    delay(2000);
//    digitalWrite(DIRA,LOW);  //reverse
//    digitalWrite(DIRB,HIGH);
//    delay(2000);
//  }
//  digitalWrite(ENABLE,LOW); // disable
//  delay(3000);

//  Serial.println("fast Slow example");
//  digitalWrite(ENABLE,HIGH); //enable on
//  digitalWrite(DIRA,HIGH); //one way
//  digitalWrite(DIRB,LOW);
//  delay(3000);
//  digitalWrite(ENABLE,LOW); //slow stop
//  delay(1000);
//  digitalWrite(ENABLE,HIGH); //enable on
//  digitalWrite(DIRA,LOW); //one way
//  digitalWrite(DIRB,HIGH);
//  delay(3000);
//  digitalWrite(DIRA,LOW); //fast stop
//  delay(3000);
//  digitalWrite(ENABLE,LOW);
//  delay(3000);

  //Serial.println("PWM full then slow");
//  digitalWrite(ENABLE,HIGH); //enable on
//  digitalWrite(DIRA,HIGH); //one way
//  digitalWrite(DIRB,LOW);
//  delay(5000);
//  digitalWrite(ENABLE,LOW);
//  delay(3000);

//  digitalWrite(ENABLE,HIGH); //enable on
//  digitalWrite(DIRA,HIGH); //one way
//  digitalWrite(DIRB,LOW);
//  delay(3000);
//  digitalWrite(ENABLE,LOW); //slow stop
//  delay(1000);
  
//  analogWrite(ENABLE,180); //half speed
//  delay(2000);
//  analogWrite(ENABLE,128); //half speeds
//  delay(2000);
//  analogWrite(ENABLE,50); //half speed
//  delay(2000);
//  analogWrite(ENABLE,128); //half speed
//  delay(2000);
//  analogWrite(ENABLE,180); //half speed
//  delay(2000);
//  analogWrite(ENABLE,255); //half speed
//  delay(2000);
//  digitalWrite(ENABLE,LOW); //all done
//  delay(3000);
}
   
