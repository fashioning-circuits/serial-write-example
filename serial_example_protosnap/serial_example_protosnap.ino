int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  // initialize serial:
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char inChar = (char)Serial.read();
    if(inChar == '1'){
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
    }
  }
}
