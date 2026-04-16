#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9); // Connect servo signal to pin 9
}

void loop() {
  myServo.write(0);   // Gripper closed
  delay(1000);
  
  myServo.write(90);  // Gripper open
  delay(1000);
}
