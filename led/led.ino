/* Blink - Acende um LED por um segundo e depois apaga por um segundo, repetidamente */
void setup() { 
pinMode(7, OUTPUT); // inicializa o pino digital 11 como uma saída
}
void loop() {
digitalWrite(7, HIGH); // acende o LED
delay(1000); // espere um segundo
digitalWrite(7, LOW); // desligue o LED
delay(1000); // espere um segundo
}
