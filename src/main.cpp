#include <Arduino.h>

const int POLL_RATE = 100;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  Serial.print("A0: ");
  Serial.print(val);
  Serial.print("\n");
  delay(1000/ POLL_RATE);
}
