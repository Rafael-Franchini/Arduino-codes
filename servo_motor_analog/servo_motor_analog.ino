#include <Servo.h>
Servo myservo1;
Servo myservo2;
#define pinVRx A2
#define pinVRy A1
#define pinSW 2
int valx;  
int valy;  

void setup() {
  pinMode(pinVRx,INPUT);
  pinMode(pinVRy,INPUT);
  pinMode(pinSW, INPUT_PULLUP);
  Serial.begin(9600);
  myservo1.attach(9);  
  myservo2.attach(10);  
  }

void loop() {
  int valorVRx=analogRead(pinVRx);
  int valorVRy=analogRead(pinVRy);
  bool statusSW=digitalRead(pinSW);

  Serial.print("Valor de x: ");
  Serial.print(valorVRx);
  valx = map(valorVRx, 0, 1023, 0, 180); 
  Serial.print("Valor de y: ");
  Serial.print(valorVRy);
  valy = map(valorVRy, 0, 1023, 0, 180); 
  myservo1.write(valx); 
  myservo2.write(valy); 
  if(!statusSW){
    Serial.println("Botao : Apertado");  
  }else{
    Serial.println("Botao : Solto");
  }
}
