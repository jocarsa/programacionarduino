int pin_salida = 8;
int tiempo_pausa = 500;
void setup() {
  pinMode(pin_salida,OUTPUT);
}

void loop() {
  delay(tiempo_pausa);
  digitalWrite(pin_salida,HIGH);
  delay(tiempo_pausa);
  digitalWrite(pin_salida,LOW);
}
