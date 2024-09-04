//Includes the Arduino Stepper Library
#include <Stepper.h>

// Defines the number of steps per rotation
const int stepsPerRevolution = 2038;
// Creates an instance of stepper class
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
Stepper myStepper = Stepper (stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  for (int i = 0; i < 1144; i++) {

  // Rotate CW slowly at 5 RPM
  myStepper.setSpeed(10);
  myStepper.step(1);  
}
}
//2575 steps = 90 degrees
//1 degree = 28.6 step
// connect ground to arduino only, no 5V+
