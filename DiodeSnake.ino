void setup() {
  // put your setup code here, to run once:
for (int i = 2; i<10; i= i+1){
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=2; i<10; i= i+1){
  digitalWrite(i,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  delay(500);
}
}
