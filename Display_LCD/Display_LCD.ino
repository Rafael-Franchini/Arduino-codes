
#include <LiquidCrystal.h>
// Ligações do Arduino
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void mostra(){

}
void btns(){

}
void setup() {
  lcd.begin(16, 2); // Aqui informo que são 16 caracteres e 2 linhas
  lcd.setCursor(0, 0); // To colocando para exibir a frase na coluna 0 e linha 0 (opcional)
  lcd.print("Arduino"); // Escrevo "Arduino"
  lcd.setCursor(0, 1); // E agora to colocando para exibir a frase na coluna 0 e linha 1
  lcd.print("Display LCD"); // E escrevo "Display LCD"
}


void loop() {
}
