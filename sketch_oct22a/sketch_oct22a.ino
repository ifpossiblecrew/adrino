
#include <Stepper.h> 

int numberofstep = 3600; 
                                  

Stepper motor(numberofstep,9,11,10,12);    // we use pins 9, 11, 10, 6        
void setup() 
{ 
 
  motor.setSpeed(9); // we set motor speed at 9
}
void loop() 
{ 
  motor.step(1000); // the motor will run during 600 step (you can change the step)
  motor.step(-100); // the motor will run during 800 step in reverse (you can change the step)

}
