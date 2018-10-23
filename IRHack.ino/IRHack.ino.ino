const int BLINK_LED = 10;
const int FADE_AMOUNT = 5;
int brightness = 0;
int Direction = 1;

void increaseBrightness()
{
  brightness+= FADE_AMOUNT;

  if (brightness + FADE_AMOUNT > 255)
  {
    brightness = 255;
  }
  analogWrite(BLINK_LED, brightness);
}

void decreaseBrightness()
{
  brightness -= FADE_AMOUNT;

  if (brightness - FADE_AMOUNT < 0)
  {
    brightness = 0;
  }

  analogWrite(BLINK_LED, brightness);
}

void setup() 
{
  pinMode(BLINK_LED, OUTPUT); // led is output
}

void loop() 
{
  if (Direction == 1 && brightness >= 255)
  {
    Direction = 0;
  }
  else if (Direction == 0 && brightness <= 0)
  {
    Direction = 1;
  }
  if (Direction == 1)
  {
    increaseBrightness();
  }
  else
  {
    decreaseBrightness();
  }
  delay(30);
}
