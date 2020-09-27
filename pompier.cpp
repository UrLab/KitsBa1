#include <Arduino.h>
int i;
void setup(){
  pinMode(9,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop(){
  for(i=500;i<1200;i++){
    if(i%100 == 0){
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
    }
    else if(i%100 == 50){
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
    }
    tone(9,i);
    delay(10);
    noTone(9);
  }
  for(;i>500;i--){
    if(i%100 == 0){
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
    }
    else if(i%100 == 50){
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
    }
    tone(9,i);
    delay(10);
    noTone(9);
  }
}
