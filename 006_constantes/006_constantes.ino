#define PIN_SALIDA 8
#define TIEMPO_PAUSA 500
void setup() {
  pinMode(PIN_SALIDA,OUTPUT);
}

void loop() {
  delay(TIEMPO_PAUSA);
  digitalWrite(PIN_SALIDA,HIGH);
  delay(TIEMPO_PAUSA);
  digitalWrite(PIN_SALIDA,LOW);
}
