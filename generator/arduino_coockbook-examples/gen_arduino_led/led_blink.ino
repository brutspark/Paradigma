int led = 13;  // LED connected to digital pin 13

void setup {
pinMode(led, OUTPUT);
}

void loop(){
digitalWrite(led, HIGH);   // set the LED on
delay(1000);               // wait for one second
digitalWrite(led, LOW);    // set the LED off
delay(1000);               // wait for one second
}
