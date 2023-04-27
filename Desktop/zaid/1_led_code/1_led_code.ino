//Name:Zaid Shaikh
//UIN: 191M042
//Date:31-01-2023
//AIM : TO BLINK AN LED ON PIN 8 USING ARDUINO
int led_1=8;
int led_2=9;

void setup() {
 pinMode(led_1, OUTPUT);
 pinMode(led_2, OUTPUT);
}

void loop() {
 digitalWrite(led_1, HIGH);
  delay(1000);
  digitalWrite(led_1, LOW);
  delay(1000);

  digitalWrite(led_2, HIGH);
  delay(1000);
  digitalWrite(led_2, LOW);
  delay(1000);
}
