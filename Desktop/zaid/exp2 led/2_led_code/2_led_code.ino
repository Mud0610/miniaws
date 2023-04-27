//Name:Harshal chandel / Affan kalyankar
//UIN: 191M006/191M015
//Date:1-03-2023
//AIM : TO BLINK AN LED ON PIN 8 USING ARDUINO
int led_1=6;
int led_2=10;

void setup() {
 pinMode(led_1, OUTPUT);
 pinMode(led_2, OUTPUT);
}

void loop() {
 digitalWrite(led_1, HIGH);
  delay(1000);
  digitalWrite(led_1, LOW);
  delay(10);

  digitalWrite(led_2, HIGH);
  delay(100);
  digitalWrite(led_2, LOW);
  delay(1000);
}
