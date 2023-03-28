
#include <Stepper.h>

#define pinBotao1 6
#define pinBotao2 7


 int stepsPerRe = 2050;  


Stepper mySt(stepsPerRe, 8,9,10,11);

// INSTANCIANDO BOTÕES


void setup() {

  mySt.setSpeed(2);
  
  Serial.begin(9600);
}

void loop() {
  mySt.step(500);
  delay(500);
}

