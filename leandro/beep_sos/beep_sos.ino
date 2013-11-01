int cxaSom = 12;

void setup(){
  pinMode(cxaSom, OUTPUT);
}

void loop(){
  sos(cxaSom);
}

void sos(int pin){
  digitalWrite(pin, HIGH);
  delay(100);  
  digitalWrite(pin, LOW);
  delay(100);  
  digitalWrite(pin, HIGH);
  delay(100);  
  digitalWrite(pin, LOW);
  delay(100);  
  digitalWrite(pin, HIGH);
  delay(100);  
  digitalWrite(pin, LOW);
  //
  delay(500);  
  digitalWrite(pin, HIGH);
  delay(500);  
  digitalWrite(pin, LOW);
  delay(500);  
  digitalWrite(pin, HIGH);
  delay(500);  
  digitalWrite(pin, LOW);
  delay(500);  
  digitalWrite(pin, HIGH);
  delay(500);  
  digitalWrite(pin, LOW);
  delay(500);  
  //
  digitalWrite(pin, HIGH);
  delay(100);  
  digitalWrite(pin, LOW);
  delay(100);  
  digitalWrite(pin, HIGH);
  delay(100);  
  digitalWrite(pin, LOW);
  delay(100);  
  digitalWrite(pin, HIGH);
  delay(100);  
  digitalWrite(pin, LOW);
  delay(2000);  
}







