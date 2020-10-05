#include <Arduino.h>

#define LEDPIN 13
#define INPIN 7

int val = 0;

void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(INPIN, INPUT);
}

void loop() {
  val = digitalRead(INPIN);
  digitalWrite(LEDPIN, val);
}