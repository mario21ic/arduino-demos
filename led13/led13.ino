//#define PIN_LED 13
int PIN_LED = 13;

void setup() {
  pinMode(PIN_LED, OUTPUT); // Como salida
}

void loop() {
  digitalWrite(PIN_LED, HIGH); // turn the LED on
  delay(2000); // wait for two seconds
  
  digitalWrite(PIN_LED, LOW); // turn the LED off
  delay(1000); // wait for a second
}
