const int buzzer = 9;   //Buzzer to arduino pin 9

void setup() {
  pinMode(buzzer, OUTPUT); //set
}

void loop() {
  tone(buzzer, 1000);   //1KHz sound signal
  delay(100);
  noTone(buzzer);       // to stop sound
  delay(1000);
}
