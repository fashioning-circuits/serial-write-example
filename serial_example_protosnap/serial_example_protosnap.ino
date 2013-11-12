void setup() {
  // initialize serial:
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char inChar = (char)Serial.read();
    if(inChar == '1'){
    }
  }
}
