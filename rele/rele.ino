#define pin1 6
#define pin2 7

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin1,LOW);//liga a porta do rele
  digitalWrite(pin2,HIGH);//liga a porta do rele
  delay(1000);
  digitalWrite(pin1,HIGH);//liga a porta do rele
  digitalWrite(pin2,LOW);//liga a porta do rele
  delay(1000);
}
