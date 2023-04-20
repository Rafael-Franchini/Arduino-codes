
//Bibliotecas
#include <LiquidCrystal.h>
#include<String.h>
#include<Vector.h>

// Ligações do Arduino
#define btn 8
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
bool btn1=true;

//vetor de atividades
String arr[] ={" Atv circuitos"," Estudar POO"," Estudar Web"," Estudar sinais"," Cola circ&Web"};
Vector<String> vector(arr);

void setup() {
  pinMode(btn,INPUT_PULLUP);
  lcd.begin(16, 2); //declara numero de colunas e linhas
}

void loop() {
  for(int i=0;i<5;i++){
    lcd.setCursor(0,0);//poe o ponteiro de escrita na coluna 1 linha 1
    lcd.print("A Fazer:");//escreve na tela
    lcd.setCursor(0,1);//poe o ponteiro de escrita na coluna 1 linha 2
    lcd.print(arr[i]);//escreve na tela o valor do vetor na posição
    delay(500);//espera 500ms
    btn1=digitalRead(btn);
    if(btn1!=true){
      vector.push_back(arr[i]);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Tarefa Feita");
      btn1=true;
    }
    delay(2500);//espera 2500ms
    lcd.clear();//limpa a tela
  }  
}
