int ledPinNo = 13;

void setup() {
  // put your setup code here, to run once:

  // Set a pin for OUTPUT
  pinMode(ledPinNo, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Turn on and off repeatly
  digitalWrite(ledPinNo, HIGH);
  delay(2000);
  digitalWrite(ledPinNo, LOW);
  delay(1000);
}
