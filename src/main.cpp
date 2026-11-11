#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  delay(1000);
  Serial.println("Setup OK");
}

void loop()
{
  Serial.println("loop laeuft");
  delay(1000);
}