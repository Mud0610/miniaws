// NAME:affan kalyankar
// UIN:191M015
// DATE:08-02-2023
//AIM:EXPERIMENT  NO.3 :
//DESCRIPTION

int led_1=9;

void setup() {
  // put your setup code here, to run once:
pinMode(led_1,OUTPUT);


}

void loop() {
  int i;
  for(i=0;i=255;i++);
  // put your main code here, to run repeatedly:
{analogWrite(led_1,i);
}
delay(100);

}
