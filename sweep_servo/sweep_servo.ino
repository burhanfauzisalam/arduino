#include <Servo.h>

Servo myservo;  // create servo object to control a servo
//Servo myservo1;

//int pos = 0;    


void setup() {
  myservo.attach(3);
//  myservo1.attach(3);
}

void loop() {
  myservo.write(50);
//  for (pos = 0; pos <= 360; pos += 1) {
//    myservo.write(pos);
//    myservo1.write(pos);
//    delay(15);
//  }
//  for (pos = 360; pos >= 0; pos -= 1) {
//    myservo.write(pos);
//    myservo1.write(pos);
//    delay(15);
//  }
}
