// MAKE NEW COLOR USING RGB CODE

#define LED_R 5
#define LED_G 6
#define LED_B 11

void setup() {
}

void loop() {
  // Make rainbow colors
  // 1. RED
  analogWrite(LED_R,255);
  analogWrite(LED_G,0);
  analogWrite(LED_B,0);
  delay(1000);

  // 2. Oragne
  analogWrite(LED_R,255);
  analogWrite(LED_G,127);
  analogWrite(LED_B,0);
  delay(1000);

  // 3. Yellow
  analogWrite(LED_R,255);
  analogWrite(LED_G,255);
  analogWrite(LED_B,0);
  delay(1000);

  // 4. Green
  analogWrite(LED_R,0);
  analogWrite(LED_G,255);
  analogWrite(LED_B,0);
  delay(1000);

  // 5. Blue
  analogWrite(LED_R,0);
  analogWrite(LED_G,0);
  analogWrite(LED_B,255);
  delay(1000);

  // 6. Indigo
  analogWrite(LED_R,0);
  analogWrite(LED_G,125);
  analogWrite(LED_B,255);
  delay(1000);

  // 7. Violet
  analogWrite(LED_R,125);
  analogWrite(LED_G,0);
  analogWrite(LED_B,255);
  delay(1000);

  // Turn off all
  analogWrite(LED_R,0);
  analogWrite(LED_G,0);
  analogWrite(LED_B,0);
  delay(5000);








}
