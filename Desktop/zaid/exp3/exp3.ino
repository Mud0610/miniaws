//Name: Zaid Shaikh
//UIN: 191M042
//Date: 14-02-2023
//Aim: Pulse with Modulation



void setup() {
 pinMode(3,OUTPUT);

}

void loop() {
  int i;
  for(i=0;i<=255;i++)
{
  analogWrite(3,i);
  delay(30);
}
for(i=255;i>=0;i--)
{
analogWrite(3,i);
delay(30);
}
}
