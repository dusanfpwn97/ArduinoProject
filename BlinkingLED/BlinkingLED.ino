#define PinR 13
#define PinG 14
#define PinB 15
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin ledPin as an output.
  pinMode(PinR, OUTPUT);
  pinMode(PinG, OUTPUT);
  pinMode(PinB, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PinR, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                   // wait for a second
  digitalWrite(PinR, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(PinG, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                   // wait for a second
  digitalWrite(PinG, LOW);
  digitalWrite(PinB, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                   // wait for a second
  digitalWrite(PinB, LOW);
  
  
  delay(50);                   // wait for a second
}
