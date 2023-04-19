
//Bibliotecas
#include <LiquidCrystal.h>

// Ligações do Arduino
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//vetor de atividades
String arr[] ={" Atv circuitos"," Estudar POO"," Estudar Web"," Estudar sinais"," Cola circ&Web"};

void mostra(){
  for(int i=0;i<5;i++){
    lcd.setCursor(0,0);//poe o ponteiro de escrita na coluna 1 linha 1
    lcd.print("A Fazer:");//escreve na tela
    lcd.setCursor(0,1);//poe o ponteiro de escrita na coluna 1 linha 2
    lcd.print(arr[i]);//escreve na tela o valor do vetor na posição
    delay(2500);//espera 2500ms
    lcd.clear();//limpa a tela
  }
}

void setup() {
  lcd.begin(16, 2); //declara numero de colunas e linhas
}

void loop() {
  mostra();//chama função que exibe as atividade descritas no vetor  
}
