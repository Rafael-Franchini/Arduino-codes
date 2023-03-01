/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/
#include<Arduino.h>
#include <Servo.h>
#define pinServo 0
int grau=0;
Servo serv;  

void setup() {
  serv.attach(pinServo);
  Serial.begin(9600);
  serv.write(0);
  delay(2000);
}

void loop() {
 
  serv.write(90);              
  delay(15);                           
}
