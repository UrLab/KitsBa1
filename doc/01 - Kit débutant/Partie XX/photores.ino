/* 
 *  Use a photoresistor (or photocell) to turn on an LED in the dark
 *  Author : Pinebook
*/

//Constants // fix values
const int pResistor = A0; // Photoresistor at Arduino analog pin A0
const int ledPin=9;       // Led pin at Arduino pin 9

//Variables // can change over time
int value;          // Store value from photoresistor (0-1023)

void setup(){
 pinMode(ledPin, OUTPUT);  // Set lepPin - 9 pin as an output
 pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input (optional)
 Serial.begin(9600); // Serial connector for numbers (optional)
}

void loop(){
  value = analogRead(pResistor); //read value
  
  Serial.println(value); //print serial (optional)
  if (value > 25){
    digitalWrite(ledPin, LOW);  //Turn led off
  }
  else{
    digitalWrite(ledPin, HIGH); //Turn led on
  }

  delay(500); //Small delay to let digital write finish (asym)
}
