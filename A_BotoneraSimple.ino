/*
  Keyboard Message test

  For the Arduino Leonardo and Micro.

  Sends a text string when a button is pressed.

  The circuit:
  - pushbutton attached from pin 4 to +5V
  - Input Pullup from 2 to 7

  created 2023
  by Luis A. Rodríguez

  */
#include "Keyboard.h"

const int buttonPin1 = 2;         // input pin for pushbutton
const int buttonPin2 = 3;         // input pin for pushbutton
const int buttonPin3 = 4;         // input pin for pushbutton
const int buttonPin4 = 5;         // input pin for pushbutton
const int buttonPin5 = 6;         // input pin for pushbutton
const int buttonPin6 = 7;         // input pin for pushbutton

int previousButtonState1 = HIGH;  // for checking the state of a pushButton
int previousButtonState2 = HIGH;  // for checking the state of a pushButton
int previousButtonState3 = HIGH;  // for checking the state of a pushButton
int previousButtonState4 = HIGH;  // for checking the state of a pushButton
int previousButtonState5 = HIGH;  // for checking the state of a pushButton
int previousButtonState6 = HIGH;  // for checking the state of a pushButton

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
  if ((buttonState1 != previousButtonState1)
      // and it's currently pressed:
      && (buttonState1 == HIGH)) {
      // type out a message
      Keyboard.print("f");
  }
  // save the current button state for comparison next time:
  previousButtonState1 = buttonState1;
  /////////* Boton g */////////
  // if the button state has changed,
  if ((buttonState2 != previousButtonState2)
      // and it's currently pressed:
      && (buttonState2 == HIGH)) {
    // type out a message
    Keyboard.print("g");
  }
  // save the current button state for comparison next time:
  previousButtonState2 = buttonState2;
  /////////* Boton h */////////
  // if the button state has changed,
  if ((buttonState3 != previousButtonState3)
      // and it's currently pressed:
      && (buttonState3 == HIGH)) {
    // type out a message
    Keyboard.print("h");
  }
  // save the current button state for comparison next time:
  previousButtonState3 = buttonState3;
  /////////* Boton j */////////
  // if the button state has changed,
  if ((buttonState4 != previousButtonState4)
      // and it's currently pressed:
      && (buttonState4 == HIGH)) {
    // type out a message
    Keyboard.print("j");
  }
  // save the current button state for comparison next time:
  previousButtonState4 = buttonState4;
  /////////* Boton k */////////
  // if the button state has changed,
  if ((buttonState5 != previousButtonState5)
      // and it's currently pressed:
      && (buttonState5 == HIGH)) {
    Keyboard.print("k");
  }
  // save the current button state for comparison next time:
  previousButtonState5 = buttonState5;
  /////////* Boton l */////////
  // if the button state has changed,
  if ((buttonState6 != previousButtonState6)
      // and it's currently pressed:
      && (buttonState6 == HIGH)) {
    // type out a message
    Keyboard.print("l");
  }
  // save the current button state for comparison next time:
  previousButtonState6 = buttonState6;

  //Delay time
  delay(100);
}
