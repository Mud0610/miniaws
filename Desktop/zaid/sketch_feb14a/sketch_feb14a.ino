//Name: Harshal chandel/ Affan kalyankar
//UIN: 191M006/191M015
//Date: 1-03-2023
//Aim: Pulse with Modulation



void setup() {
 pinMode(11,OUTPUT);

}


  int i;
  void loop()
  {
    for(i=0;i<=255;i++)
  

  analogWrite(11,i);
  delay(100);
}
