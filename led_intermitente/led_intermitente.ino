// Inicia el programa
void setup() {
  // Inica el pin digital LED_BUILTIN como salida
  // En arduino UNO, MEGA y ZERO, LED_BUILTIN corresponde al pin 13
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Enciende el led
  delay(1000);                       // Espera 1 segundo
  digitalWrite(LED_BUILTIN, LOW);    // Apaga el led
  delay(1000);                       // Espera un segundo
}
