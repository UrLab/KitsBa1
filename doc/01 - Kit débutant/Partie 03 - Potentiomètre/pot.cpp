#include <Arduino.h>

#define LED 3
#define POT A0

int output;
int led_value;
void setup() {
  pinMode(LED, OUTPUT);
}
void loop() {
  output = analogRead(POT);
  led_value = map(output, 0, 1023, 0, 255);
  analogWrite(LED, led_value);
  delay(1);
}
