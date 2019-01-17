#define internalLed 2
// ledPin refers to ESP32 GPIO 23
const int ledPin = 23;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin ledPin as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(internalLed, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  BlinkExternalLED();
}

void BlinkExternalLED()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
