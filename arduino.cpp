int buttonPin = 5;   // button to GND
int relayPin  = 8;   // relay IN pin
int ledPin    = 2;   // single LED
void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // button wired to GND
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(relayPin, LOW); // pump off at start
  digitalWrite(ledPin, LOW);
}

void loop() {
  // INPUT_PULLUP means:
  // PRESSED = LOW
  // RELEASED = HIGH
  if (digitalRead(buttonPin) == LOW) {
    // Button pressed → turn ON pump + LED
    digitalWrite(relayPin, HIGH);
    digitalWrite(ledPin, HIGH);
  } 
  else {
    // Button released → turn OFF pump + LED
    digitalWrite(relayPin, LOW);
    digitalWrite(ledPin, LOW);
  }
}

