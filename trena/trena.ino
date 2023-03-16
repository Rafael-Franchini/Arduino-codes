#include<LiquidCrystal.h>
#define trig 2
#define echo 3
#define btn1 10
unsigned long tempo;
double distancia;
bool buttonState ; 
const int rs = 4, en = 5, d4 = 6, d5 = 7, d6 = 8, d7 = 9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
  pinMode(btn1,INPUT_PULLUP);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  digitalWrite(trig, LOW);
  lcd.clear();
  lcd.begin(16, 2); 
  lcd.setCursor(0, 1); 
  lcd.print("Pressione o Btn");
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(btn1);
  if(buttonState != HIGH){
    lcd.begin(16, 2); 
    lcd.setCursor(0, 1); 
    lcd.print("Centimetros"); 
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    tempo = pulseIn(echo, HIGH);
    distancia = tempo/58;
    lcd.setCursor(0,0);
    lcd.print(distancia);
    delay(5000);
    lcd.clear();
    lcd.clear();
    lcd.begin(16, 2); 
    lcd.setCursor(0, 1); 
    lcd.print("Pressione o Btn");
  }

}
