// SERIAL COMMUNICATION - BASIC

void setup() {
  // Initialize the Serial Communication Interface
  //Serial.begin(9600);  // 9600: A standard baud rate for Arduino
  // Serial.begin(115200); // 115200: Error happend -> why? Arduino->PC is 9600,but it's 115200, so it's over the serial connection, in reasult, errors happened => solution: change the Baud rate in PC to 115200 baud



}

void loop() {
  // Print a message
  Serial.println("Yo!");
  delay(10000);

}
