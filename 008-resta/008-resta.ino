#define PIN_SALIDA 8
int tiempo_pausa = 500;
void setup() {
  pinMode(PIN_SALIDA,OUTPUT);
}

void loop() {
  delay(tiempo_pausa);
  digitalWrite(PIN_SALIDA,HIGH);
  delay(tiempo_pausa);
  digitalWrite(PIN_SALIDA,LOW);
  tiempo_pausa = tiempo_pausa - 50;
}
