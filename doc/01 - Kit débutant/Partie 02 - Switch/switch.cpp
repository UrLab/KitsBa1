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
  digitalWrite(LEDPIN, !val);  // On prend l'inverse de ce que le bouton envoie comme information pour allumer la LED quand on appuie sur le boutton
}