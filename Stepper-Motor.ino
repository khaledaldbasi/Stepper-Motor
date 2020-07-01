
#include <Stepper.h>
   
   int Steps =20;
   Stepper Motor(Steps, 2,3,4,5 );

void setup() {
  Motor.setSpeed(300);

}     

void loop() {

 
  Motor.step(2*Steps);
  delay(150);
 
  
  Motor.step(-2*Steps);
  delay(150);
 
}
