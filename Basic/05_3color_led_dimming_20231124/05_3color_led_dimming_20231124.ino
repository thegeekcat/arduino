// DIMMING LED LIGHT
// analogWrite(Pin, Value)
//  - Applicable Pins: ~3, ~5, ~6, ~9, ~10, ~11
//  - Values: 0~255


// Define names
#define LED_RED 5

void setup() {

}

void loop() {
  // Dimming light using PWM
  analogWrite(LED_RED, 0);  // Turn off
  delay(1000);
  analogWrite(LED_RED, 50);
  delay(1000);
  analogWrite(LED_RED, 100);
  delay(1000);
  analogWrite(LED_RED, 150);
  delay(1000);
  analogWrite(LED_RED, 200);
  delay(1000);
  analogWrite(LED_RED, 255); // Turn on



}
