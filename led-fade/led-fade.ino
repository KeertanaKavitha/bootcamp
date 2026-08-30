void setup() {
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  int x;
  x = analogRead(A0);
  analogWrite(3,x);

}