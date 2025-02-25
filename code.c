/*
TEJ3M-Unit #2-03 arduino
created by Sophie Nguyen 
created on Feb 25

makes the LED blink on and off repeatedly
*/

const int PIN_5 = 5;
  
void setup()
{
  pinMode(PIN_5, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(PIN_5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}