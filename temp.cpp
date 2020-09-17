#include <Arduino.h>
int ThermistorPin = A0;
int Vo;
float R1 = 1000; // value of R1 on board
float logR2, R2, T;
float c1 =  3.354016e-03 , c2 =  2.933908e-04, c3 = 3.494314e-06, c4 =  -7.712690e-07 ; //steinhart-hart coeficients for thermistor

void setup() {
  Serial.begin(9600);
}

void loop() {
  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0); //calculate resistance on thermistor
  logR2 = log(R2/1000);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2 + c4*logR2*logR2*logR2)); // temperature in Kelvin
  T = T - 273.15; //convert Kelvin to Celcius
 // T = (T * 9.0)/ 5.0 + 32.0; //convert Celcius to Farenheit

  Serial.print("Temperature: ");
  Serial.print(T);
  Serial.println(" C");

  delay(500);
}
