int leds[] = {13, 12, 11, 9, 8, 7, 6, 4, 3, 2};

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  // LEDs ON one by one
  for (int i = 0; i < 10; i++) {
    digitalWrite(leds[i], HIGH);
    delay(300);
  }

  // All LEDs blink together
  for (int j = 0; j < 3; j++) {
    
    // OFF all
    for (int i = 0; i < 10; i++) {
      digitalWrite(leds[i], LOW);
    }
    delay(400);

    // ON all
    for (int i = 0; i < 10; i++) {
      digitalWrite(leds[i], HIGH);
    }
    delay(400);
  }

  // Turn everything OFF before restarting
  for (int i = 0; i < 10; i++) {
    digitalWrite(leds[i], LOW);
  }

  delay(600);
}
