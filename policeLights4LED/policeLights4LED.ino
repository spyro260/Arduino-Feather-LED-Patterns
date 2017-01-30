int x = 200; //blink speed


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
digitalWrite(13, HIGH);
digitalWrite(11, HIGH);
  delay(50);
digitalWrite(13, LOW);
digitalWrite(11, LOW);
  delay(50);
digitalWrite(13, HIGH);
digitalWrite(11, HIGH);
  delay(50);
digitalWrite(13, LOW);
digitalWrite(11, LOW);
  delay(50);

delay(x);

digitalWrite(12, HIGH);
digitalWrite(10, HIGH);
  delay(50);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
  delay(50);
digitalWrite(12, HIGH);
digitalWrite(10, HIGH);
  delay(50);
digitalWrite(12, LOW);
digitalWrite(10, LOW);
  delay(50);

delay(x);
}
