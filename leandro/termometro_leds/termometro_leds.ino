#include <dht11.h>
dht11 sensor;

int ledVermelho   = 8;
int ledVerde      = 9;
float temperatura = 0;
float humidade    = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  Serial.print("Lendo sensor: ");
  int chk = sensor.read(2);
  switch(chk) {
  case DHTLIB_OK:
    Serial.println("OK");
    break;
  case DHTLIB_ERROR_CHECKSUM:
    Serial.println("Erro no checksum");
    break;
  case DHTLIB_ERROR_TIMEOUT:
    Serial.println("Tempo esgotado");
    break;
  default:
    Serial.println("Erro desconhecido");
  }
  Serial.print("Umidade (%): ");
  Serial.println((float)sensor.humidity, 2);
  Serial.print("Temperatura (graus Celsius): ");
  Serial.println((float)sensor.temperature, 2);

  temperatura = (float)sensor.temperature;
  if(temperatura > 30){
    digitalWrite(ledVermelho, HIGH);
  } 
  else if (temperatura < 28)  {
    digitalWrite(ledVerde, HIGH);    
  }
  else {
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, LOW);
  }

  delay(2000);
}
