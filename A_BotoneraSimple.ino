#include "Keyboard.h"

const int buttonPin1 = 2;         // input pin for pushbutton
const int buttonPin2 = 3;         // input pin for pushbutton
const int buttonPin3 = 4;         // input pin for pushbutton
const int buttonPin4 = 5;         // input pin for pushbutton
const int buttonPin5 = 6;         // input pin for pushbutton
const int buttonPin6 = 7;         // input pin for pushbutton

boolean flag = true; 

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);

  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the pushbutton:
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  int buttonState4 = digitalRead(buttonPin4);
  int buttonState5 = digitalRead(buttonPin5);
  int buttonState6 = digitalRead(buttonPin6);
  /////////* Boton f */////////
  // if the button state has changed,
  if (buttonState1 == HIGH){
    flag = false;
  }
  else if((buttonState1 == LOW) && (flag == false)){
    flag = true;
    Keyboard.print("f");
  }
  
  //Delay time
  delay(100);
}
