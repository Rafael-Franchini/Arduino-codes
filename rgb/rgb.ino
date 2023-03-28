// definir as variaveis para os pinos utilizados
int pinoR = 16; // pino utilizado pelo terminal R (vermelho)
int pinoB = 5; // pino utilizado pelo terminal B (azul)
int pinoG = 4; // pino utilizado pelo terminal G (Verde)
#define COMMON_ANODE //define o Led RGB como catodo comum
void setup(){
// define os pinos do Led como saida
pinMode(pinoR, OUTPUT);
pinMode(pinoG, OUTPUT);
pinMode(pinoB, OUTPUT);
}
// funçao para produzir o brilho do led de acordo com valores informados
void setColor(int vermelho, int verde, int azul){
analogWrite(pinoR, vermelho); // define o brilo do led de acordo com o velor de 'vermelho'
analogWrite(pinoG, verde); // define o brilo do led de acordo com o velor de 'verde'
analogWrite(pinoB, azul); // define o brilo do led de acordo com o velor de 'azul'
}
void loop(){
    int random=1+(rand()% 256);
    int random1=1+(rand()% 256);
    int random2=1+(rand()% 256);
    setColor(random,random1,random2);
    delay(1500);
}
