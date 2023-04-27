//Name:Harshal chandel / affan kalyankar
//UIN: 191M006 / 191M015
//Date:1-3 -2023
//Aim:blink an led


int led=8;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  
// put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(100);
}
 
