void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Iniciando\n");
  for (int i = 0; i <= 255; i++) {
    Serial.println(i);
    delay(1000);
  }
  
//  Serial.println("Hello World");
//  delay(1000);
}
