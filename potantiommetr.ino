int readpin = A2;
int ledpin =3;
int V;
void setup() {
  // put your setup code here, to run once:
pinMode(readpin,INPUT);
pinMode(ledpin,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
V=analogRead(readpin);
analogWrite(ledpin,V*225./1023.);
}
