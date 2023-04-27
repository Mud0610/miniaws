//Name:Zaid Shaikh
//UIN: 191M042
//Date:31-01-2023
int led_1=8;

void setup() {
 pinMode(led_1, OUTPUT);
}

void loop() {
 digitalWrite(led_1, HIGH);
  delay(1000);

  digitalWrite(led_1, LOW);
  delay(1000);
}
