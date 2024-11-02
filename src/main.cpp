#include <Arduino.h>

static const uint8_t DELAY = 10; // hz
static const uint8_t READ_PINS[] = {A0, A1, A2}; // brake, shockA, shockB

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (uint8_t pin : READ_PINS)
  {
    int val = analogRead(pin);
    Serial.print(val);
    Serial.print(' ');
  }
  Serial.print("\n");
  delay(DELAY);
}