//NAME : ADIL , SUFYAN 
//UIN : 202M031 , 202M011
//DATE : 23-01-2023
//AIM : TO BLINK AN LED ON PIN 13
//THIS PROGRAM IS USED TO BLINK ON BOARD LED ON ARDUINO UNO
int LED_0=13;

void setup() {
pinMode (LED_0, OUTPUT);
}

void loop() {
digitalWrite(LED_0, HIGH);
delay(1000);//delay 1s
digitalWrite(LED_0, LOW);
delay(1000);//delay 1s
}
