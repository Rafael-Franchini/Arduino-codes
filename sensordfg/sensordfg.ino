//pinos

#define pinSensor 6
#define pinBuzzer 7

#define FOGO LOW

//define

#define DEBUG
//func
void controleAlarme(byte funcao,unsigned long tempo=1000);
//variaveis
void setup() {
  Serial.begin(9600);
  pinMode(pinSensor,INPUT);
  pinMode(pinBuzzer,OUTPUT);

#ifdef DEBUG
  Serial.println("Setup Concluido");
#endif
}

void loop() {
  if(digitalRead(pinSensor)==FOGO){
    controleAlarme(HIGH);
  }else{
    controleAlarme(LOW);  
  }
  
}
// IMPLEMENTO DE FUNÇÕES

// FUNÇÃO PARA EFEITO DE ALARME
void controleAlarme(byte funcao, unsigned long tempo = 1000) {
  static unsigned long controleTempo = millis();
  static bool flag = true;
  if (funcao == true) {
    if (flag == true ) {
      if (millis() < (controleTempo + tempo) ) {
        digitalWrite(pinBuzzer, HIGH);
      } else {
        flag = false;
      }
    } else if ( millis() < (controleTempo + tempo + tempo) ) {
      digitalWrite(pinBuzzer, LOW);
    } else if (  millis() > (controleTempo + tempo + tempo) ) {
      flag = true;
      controleTempo = millis();
    }
  } else {
    digitalWrite(pinBuzzer, LOW);
  }
}
