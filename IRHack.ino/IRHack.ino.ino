const int BLINK_LED = 10;
void setup() 
{
  pinMode(BLINK_LED, OUTPUT);
}

void loop() 
{
  digitalWrite(BLINK_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(BLINK_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
