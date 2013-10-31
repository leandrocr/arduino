int incomingByte = 0;   // for incoming serial data
int ledVerde = 9;
int ledVermelho = 8;

void setup() {                
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  // Turn the Serial Protocol ON
  Serial.begin(9600);
}

void loop() {
  /*  check if data has been sent from the computer: */
  if (Serial.available()) {
    incomingByte = Serial.read();
    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);

    switch (incomingByte) {
    case 56:
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledVerde, HIGH);
      break;
    case 57:
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledVermelho, HIGH);
      break;
    default: 
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledVerde, LOW);
      // if nothing else matches, do the default
      // default is optional
    }
  }
}



