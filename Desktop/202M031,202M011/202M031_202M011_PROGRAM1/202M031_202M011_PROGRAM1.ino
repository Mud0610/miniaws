//NAME : ADIL , SUFYAN 
//UIN : 202M031 , 202M011
//DATE : 23-01-2023
//AIM : TO BLINK AN LED ON PIN 13
//THIS PROGRAM IS USED TO BLINK ON BOARD LED ON ARDUINO UNO

void setup() {
pinMode (13, OUTPUT);
}

void loop() {
digitalWrite(13, HIGH);
delay(50);//delay 1s
digitalWrite(13, LOW);
delay(50);//delay 1s
}
