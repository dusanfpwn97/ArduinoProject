uint8_t temperatureSensRead();
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Temperature of the internal sensor");
  Serial.println(((temperatureSensRead() - 32) / 1.8));
  delay(500);
}
