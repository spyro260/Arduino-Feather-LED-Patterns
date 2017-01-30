int a = 5000;
int b = 3000;
int c = 5000;
int x = 200; //blink speed


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
digitalWrite(13, HIGH);
  delay(a);
digitalWrite(13, LOW);

digitalWrite(11, HIGH);
  delay(c);
digitalWrite(11,LOW);

digitalWrite(12, HIGH);
  delay(b);
digitalWrite(12, LOW);


}
