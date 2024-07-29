// Welcome to Aviyan's Thoughts

#include <Servo.h>

#define CH 0 // connect signal PIN to PWM-0 of Aries Board
Servo myservo;  // create servo object to control a servo
 
int angle; // shaft angle

// the setup function runs once when you press reset or power the board
void setup() {
  // attaches the servo on PWM Channel - 0
  myservo.attach(CH);  
}

// the loop function runs over and over again forever
void loop() {
  // Rotate motor from 0 to 180 and then back to 0 
  for(angle=0 ; angle<=180; angle++){
    myservo.write(angle);             // sets the servo position according to the scaled value
  }

  for(angle=180 ; angle>=0; angle--){
    myservo.write(angle);             // sets the servo position according to the scaled value
  }
}
