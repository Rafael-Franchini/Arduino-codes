#define pinVRx A2
#define pinVRy A1
#define pinSW 2

void setup() {
  pinMode(pinVRx,INPUT);
  pinMode(pinVRy,INPUT);
  pinMode(pinSW, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int valorVRx=analogRead(pinVRx);
  int valorVRy=analogRead(pinVRy);
  bool statusSW=digitalRead(pinSW);

  Serial.print("Valor de x: ");
  Serial.print(valorVRx);
  Serial.print("Valor de y: ");
  Serial.print(valorVRy);
  if(!statusSW){
    Serial.println("Botao : Apertado");  
  }else{
    Serial.println("Botao : Solto");
  }
}
