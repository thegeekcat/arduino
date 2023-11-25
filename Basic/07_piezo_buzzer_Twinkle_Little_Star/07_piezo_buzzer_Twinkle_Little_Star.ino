// PIEZO BUZZER - Twinkle, Twinkle Little Star

// Define Pins
#define BuzzerPin 11

// Define Notes
#define do 261.63      // C note
#define re 293.66      // D note
#define mi 329.63      // E note
#define fa 349.23      // F note
#define sol 392.00     // G note
#define la 440.00      // A note
#define ti 493.88      // B note
#define highDo 523.25  // High C note


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Play the song
  tone(BuzzerPin, do, 800);
  delay(800);
  tone(BuzzerPin, do, 800);
  delay(800);
  tone(BuzzerPin, sol, 800);
  delay(800);
  tone(BuzzerPin, sol, 800);
  delay(800);
  tone(BuzzerPin, la, 800);
  delay(800);
  tone(BuzzerPin, la, 800);
  delay(800);
  tone(BuzzerPin, sol, 1500);
  delay(1500);

  tone(BuzzerPin, fa, 800);
  delay(800);
  tone(BuzzerPin, fa, 800);
  delay(800);
  tone(BuzzerPin, mi, 800);
  delay(800);
  tone(BuzzerPin, mi, 800);
  delay(800);
  tone(BuzzerPin, re, 800);
  delay(800);
  tone(BuzzerPin, re, 800);
  delay(800);
  tone(BuzzerPin, do, 1500);
  delay(1500);
  
  tone(BuzzerPin, sol, 800);
  delay(800);
  tone(BuzzerPin, sol, 800);
  delay(800);
  tone(BuzzerPin, fa, 800);
  delay(800);
  tone(BuzzerPin, fa, 800);
  delay(800);
  tone(BuzzerPin, mi, 800);
  delay(800);
  tone(BuzzerPin, mi, 800);
  delay(800);
  tone(BuzzerPin, re, 1500);
  delay(1500);

  tone(BuzzerPin, sol, 800);
  delay(800);
  tone(BuzzerPin, sol, 800);
  delay(800);
  tone(BuzzerPin, fa, 800);
  delay(800);
  tone(BuzzerPin, fa, 800);
  delay(800);
  tone(BuzzerPin, mi, 800);
  delay(800);
  tone(BuzzerPin, mi, 800);
  delay(800);
  tone(BuzzerPin, re, 1500);
  delay(1500);

  tone(BuzzerPin, do, 800);
  delay(800);
  tone(BuzzerPin, do, 800);
  delay(800);
  tone(BuzzerPin, sol, 800);
  delay(800);
  tone(BuzzerPin, sol, 800);
  delay(800);
  tone(BuzzerPin, la, 800);
  delay(800);
  tone(BuzzerPin, la, 800);
  delay(800);
  tone(BuzzerPin, sol, 1500);
  delay(1500);

  tone(BuzzerPin, fa, 800);
  delay(800);
  tone(BuzzerPin, fa, 800);
  delay(800);
  tone(BuzzerPin, mi, 800);
  delay(800);
  tone(BuzzerPin, mi, 800);
  delay(800);
  tone(BuzzerPin, re, 800);
  delay(800);
  tone(BuzzerPin, re, 800);
  delay(800);
  tone(BuzzerPin, do, 1500);
  delay(1500);

}
