

#include "Stepper.h"
#include "IRremote.h"

/*----- Variables, Pins -----*/
#define STEPS  32   // Number of steps per revolution of Internal shaft
#define SPEED 900  // nearly max speed
#define STEPS2TAKE 256  // 2048 = 1 Revolution
int receiver = 12; // Signal Pin of IR receiver to Arduino Digital Pin 6

/*-----( Declare objects )-----*/
// Setup of proper sequencing for Motor Driver Pins
// In1, In2, In3, In4 in the sequence 1-3-2-4
Stepper small_stepper(STEPS, 8, 10, 9, 11);
IRrecv irrecv(receiver);    // create instance of 'irrecv'
decode_results results;     // create instance of 'decode_results'

void setup()
{ 
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
if (irrecv.decode(&results)) // an IR signal received 
//Serial.println(results.value); // for finding button codes

// Samsung code list
// 0xE0E040BF   POWER
// 0xE0E0E01F   VOL+
// 0xE0E0D02F   VOL-

  {
    switch(results.value)

    {

      case 0xE0E0E01F: // VOL+ button pressed
                      small_stepper.setSpeed(SPEED);
                      small_stepper.step(STEPS2TAKE);
                      delay(500); 
                      break;

      case 0xE0E0D02F: // VOL- button pressed
                      small_stepper.setSpeed(SPEED);
                      small_stepper.step(-STEPS2TAKE);
                      delay(500); 
                      break;
                
    }
    
      irrecv.resume(); // receive the next value
                 digitalWrite(8, LOW);
                 digitalWrite(9, LOW);
                 digitalWrite(10, LOW);
                 digitalWrite(11, LOW);       
  }  


}
