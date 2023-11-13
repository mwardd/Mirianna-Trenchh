//Turn on lights
const int buttonAPin = 2;
int buttonAState = 0;
int previousButtonAState = 0;
const int ledPin = 13;
const int ledPin = 12;


//kill family
const int buttonBPin = 3;
int buttonBState = 0;
int previousButtonBState = 0;
const int ledPin = 11;

//turn off lights
const int buttonCPin = 4;
int buttonCState = 0;
int previousButtonCState = 0;

//Rose
const int buttonDPin = 5;
int buttonDState = 0;
int previousButtonDState = 0;
#include <Servo.h>;
Servo roseservo;
Servo myservo2;

//Baba yaga
const int buttonEPin = 6;
int buttonEState = 0;
int previousButtonEState = 0;

void setup() {
  // put your setup code here, to run once:
  roseservo.attach(10);
  roseservo.write(0);
}

void loop() {
  buttonAState = digitalRead(buttonAPin);

  if (buttonAState != previousButtonAState) {
    if (buttonAState == HIGH) {
      A = true;
    }
  }

  if (A == true) {
    digitalWrite(ledA, HIGH);

    if (buttonBState != previousButtonBState) {
      if (buttonBState == HIGH) {
        B = true;
      }
    }
  }

  if (B == true){

  }

  previousButtonAState = buttonAState;
}
