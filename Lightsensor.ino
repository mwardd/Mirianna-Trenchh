//Test pull comment! 
// notes in the melody:
(TEST CHANGES)


 int sensorVal;
const int sensorPin = A0;
const int ledPin = 13;
int buttonState = 0;
  
void setup() {
   { Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(2, INPUT);
  }


}

void loop() {
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);
  buttonState = digitalRead(2);
  if ((sensorVal <=100) && (buttonState == HIGH)){
    digitalWrite(ledPin, HIGH);
    digitalWrite(8, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(8, LOW);
  }
}
