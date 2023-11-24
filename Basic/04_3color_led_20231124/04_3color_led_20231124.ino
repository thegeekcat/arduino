// CONTROL 3 COLORS-LED

#define LED_RED 5
#define LED_GREEN 6
#define LED_BLUE 11

void setup() {
  // Set Outputs
  pinMode(LED_RED, OUTPUT); // RED
  pinMode(LED_GREEN, OUTPUT); // GREEN
  pinMode(LED_BLUE, OUTPUT); // BLUE
}

void loop() {
  // Turn on and off: RED
  digitalWrite(LED_RED, HIGH);
  delay(1000);
  digitalWrite(LED_RED, LOW);
  delay(1000);

  // Turn on and off: GREEN
  digitalWrite(LED_GREEN, HIGH);
  delay(1000);
  digitalWrite(LED_GREEN, LOW);
  delay(1000);

  // Turn on and off: BLUE
  digitalWrite(LED_BLUE, HIGH);
  delay(1000);
  digitalWrite(LED_BLUE, LOW);
  delay(1000);
}
