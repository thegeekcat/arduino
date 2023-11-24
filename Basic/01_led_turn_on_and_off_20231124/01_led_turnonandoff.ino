// Turn on/off No13 LED

void setup() {
  // put your setup code here, to run once:
  
  // Set 13pin as OUTPUT
  pinMode(13,OUTPUT);

  // Turn on LED for 1 sec, and turn off for 1 sec
  digitalWrite(13,HIGH); // High = 5V
  delay(5000); // 1000 = 1sec
  digitalWrite(13,LOW); // Low = 0v
  delay(5000);

}

void loop() {
  // put your main code here, to run repeatedly:

}
