
// include the library code:
#include <LiquidCrystal.h>
// Ligações do Arduino

//lcd
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//ultrasonic sensor
#define echo 9
#define trig 10
unsigned long tempo;
float distancia;

//buzzer
int buzzerpin=8;

void setup() {
  //led
  pinMode(7, OUTPUT); 
  
  //lcd
  lcd.begin(16, 2); // Aqui informo que são 16 caracteres e 2 linhas
  lcd.setCursor(0, 0); 
  lcd.print("Distancia:"); 
  lcd.setCursor(0, 1); 
  lcd.print(distancia);
  
  //us
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trig,LOW);

  //buzzer
  pinMode(buzzerpin,OUTPUT);
}
 
void loop() {
  digitalWrite(trig,HIGH);
  digitalWrite(trig,LOW);
  tempo = pulseIn(echo,HIGH);
  distancia = tempo/58;
  lcd.setCursor(0, 1); 
  lcd.print(distancia); 
  delay(15);
  if(distancia<=5){
    digitalWrite(7, HIGH); // acende o LED
    tone(buzzerpin,261,250);
  }
  else{
    digitalWrite(7, LOW); 
  }
}
