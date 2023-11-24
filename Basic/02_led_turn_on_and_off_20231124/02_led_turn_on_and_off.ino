void setup() {
  // put your setup code here, to run once:

  // Set 13 as OUTPUT
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Turn on and off
  digitalWrite(13, HIGH); // Turn on (5v)
  delay(1000);
  digitalWrite(13, LOW); // Turn off (0v)
  delay(1000);
  digitalWrite(13, HIGH); // Turn on (5v)
  delay(2000);
  digitalWrite(13, LOW); // Turn off (0v)
  delay(2000);
    digitalWrite(13, HIGH); // Turn on (5v)
  delay(3000);
  digitalWrite(13, LOW); // Turn off (0v)
  delay(3000);
  digitalWrite(13, HIGH); // Turn on (5v)
  delay(4000);
  digitalWrite(13, LOW); // Turn off (0v)
  delay(4000);
  digitalWrite(13, HIGH); // Turn on (5v)
  delay(5000);
  digitalWrite(13, LOW); // Turn off (0v)
  delay(5000);

}
