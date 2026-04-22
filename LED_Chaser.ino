int leds[] = {2,3,4,5,6,7,8,9};
int total = 8;

void setup() {
  for(int i = 0; i < total; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  // Forward Chase
  for(int i = 0; i < total; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }

  // Reverse Chase
  for(int i = total - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }

}
