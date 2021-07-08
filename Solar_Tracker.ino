//by aditya-rk01
//15-04-2021
const int analogInPin1 = A0;  // Analog input pin that the potentiometer is attached to
const int analogInPin2 = A1;  // Analog input pin that the potentiometer is attached to
//Motor 
const int inputPin1  = 9;   // Pin  7 of L293D IC
const int inputPin2  = 8;   // Pin  2 of L293D IC



int sensorValue1 = 0;        // value read from the pot
int outputValue1 = 0;        // value output to the PWM (analog out)
int sensorValue2 = 0;        // value read from the pot
int outputValue2 = 0;        // value output to the PWM (analog out)


void setup() {
  pinMode(inputPin1, OUTPUT);
  pinMode(inputPin2, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue1 = analogRead(analogInPin1);
  // map it to the range of the analog out:
  outputValue1 = map(sensorValue1, 0, 1023, 0, 255);
  // read the analog in value:
  sensorValue2 = analogRead(analogInPin2);
  // map it to the range of the analog out:
  outputValue2 = map(sensorValue2, 0, 1023, 0, 255);
  // change the analog out value:
 if((outputValue1-outputValue2>100)||(outputValue1-outputValue2<-100))
 {
  if(outputValue1>outputValue2)
  {
    digitalWrite(inputPin1, HIGH);
    digitalWrite(inputPin2, LOW);
  }
  else
  {
    digitalWrite(inputPin1, LOW);
    digitalWrite(inputPin2, HIGH);
  }
 }
 else
 {
  digitalWrite(inputPin1, LOW);
  digitalWrite(inputPin2, LOW);
 }
 

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
