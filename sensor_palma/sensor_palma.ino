#define pincl 3
#define pinled 2
bool led;
void setup() {
  // put your setup code here, to run once:
  pinMode(pincl,INPUT);
  pinMode(pinled,OUTPUT);
  led=false;
  digitalWrite(pinled,led);
}

void loop() {
  led=false;
  // put your main code here, to run repeatedly:
  if(digitalRead(pincl)==HIGH ){
    led=!led;
  }
  digitalWrite(pinled,led);
}
