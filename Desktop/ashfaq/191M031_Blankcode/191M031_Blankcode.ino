// NAME : ZAID,ASHFAQUE
// UIN : 191M042,191M031
// DATE : 24-01-2023
// AIM : TO BLINK LED ON PIN 13
// DESCRIPTION :THIS PROGRAM WILL BLINK LED ON ARDUINO WITH A DELAY OF 1000 MS 
int LED_0=13;

void setup() {
  pinMode(LED_0,OUTPUT);
  // ARDUINO IS INSTRUCTED TO TREAT PIN 13 AS OUTPUT
}

void loop() {
  int t = 1000;
  digitalWrite(LED_0,HIGH);
  delay(t);
  digitalWrite(LED_0,LOW);
  delay(t);  
}
