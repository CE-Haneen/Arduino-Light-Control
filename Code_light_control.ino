void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    digitalWrite(8, HIGH);   
    delay(5000);              
    digitalWrite(8, LOW);   
  }

  if (digitalRead(3) == HIGH) {
    digitalWrite(9, HIGH);
    delay(5000);              
    digitalWrite(9, LOW);
  }

  if (digitalRead(4) == HIGH) {
    digitalWrite(10, HIGH);
    delay(5000);              
    digitalWrite(10, LOW);
  }
}