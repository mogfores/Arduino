int led = 3; // defino pino 3 com o nome led

void setup() {
  pinMode(led, OUTPUT); //define o led pino 3 como saida
}

void loop() {
  digitalWrite(led, HIGH); // liga a saída led
  delay(1000); //pausa de 1 segundo
  digitalWrite(led, LOW); // desliga a saída led
  delay(1000);

}
