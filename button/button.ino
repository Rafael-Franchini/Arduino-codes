// definir o número dos pinos
const int buttonPin = 2; // o número do pino do botão
const int pinoB =  11;// pino usado pelo terminal B(BLUE)
const int pinoG =  9;// pino usado pelo terminal G(VERDE )
const int pinoR =  10;// pino usado pelo terminal R(RED)
// mudança de variável:
int buttonState = 0; // variável para ler o status do botão
void setup() {
// indicando o pino do botão de pressão como uma entrada:
pinMode(buttonPin, INPUT);
}
void setColor(int vermelho, int verde, int azul){
analogWrite(pinoR, vermelho); // define o brilo do led de acordo com o velor de 'vermelho'
analogWrite(pinoG, verde); // define o brilo do led de acordo com o velor de 'verde'
analogWrite(pinoB, azul); // define o brilo do led de acordo com o velor de 'azul'
}

void loop(){
// ler o estado do valor do botão:
buttonState = digitalRead(buttonPin);
// verificar se o botão está pressionado.
// se sim, o estado do botão é alto:
if (buttonState == HIGH) {
// acende o led:
setColor(255, 0, 0);
}
else {
// se não, led apagado:
setColor(255, 255, 255); 
}
}
