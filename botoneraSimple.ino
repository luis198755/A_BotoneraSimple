/*
  Keyboard Message test

  For the Arduino Leonardo and Micro.

  Sends a text string when a button is pressed.

  The circuit:
  - pushbutton attached from pin 4 to +5V
  - 10 kilohm resistor attached from pin 4 to ground

  created 24 Oct 2011
  modified 27 Mar 2012
  by Tom Igoe
  modified 11 Nov 2013
  by Scott Fitzgerald

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/KeyboardMessage
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


int counter = 0;                 // button push counter

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

  // if the button state has changed,
  if ((buttonState1 != previousButtonState1)
      // and it's currently pressed:
      && (buttonState1 == HIGH)) {
    // increment the button counter
    counter++;
    // type out a message
    Keyboard.print("f");
    //Keyboard.print(counter);
    //Keyboard.println(" años.");
  }
  // save the current button state for comparison next time:
  previousButtonState1 = buttonState1;

  // if the button state has changed,
  if ((buttonState2 != previousButtonState2)
      // and it's currently pressed:
      && (buttonState2 == HIGH)) {
    // increment the button counter
    counter++;
    // type out a message
    Keyboard.print("g");
    //Keyboard.print(counter);
    //Keyboard.println(" años.");
  }
  // save the current button state for comparison next time:
  previousButtonState2 = buttonState2;

  // if the button state has changed,
  if ((buttonState3 != previousButtonState3)
      // and it's currently pressed:
      && (buttonState3 == HIGH)) {
    // increment the button counter
    counter++;
    // type out a message
    Keyboard.print("h");
    //Keyboard.print(counter);
    //Keyboard.println(" años.");
  }
  // save the current button state for comparison next time:
  previousButtonState3 = buttonState3;

  // if the button state has changed,
  if ((buttonState4 != previousButtonState4)
      // and it's currently pressed:
      && (buttonState4 == HIGH)) {
    // increment the button counter
    counter++;
    // type out a message
    Keyboard.print("j");
    //Keyboard.print(counter);
    //Keyboard.println(" años.");
  }
  // save the current button state for comparison next time:
  previousButtonState4 = buttonState4;

  // if the button state has changed,
  if ((buttonState5 != previousButtonState5)
      // and it's currently pressed:
      && (buttonState5 == HIGH)) {
    // increment the button counter
    counter++;
    // type out a message
    Keyboard.print("k");
    //Keyboard.print(counter);
    //Keyboard.println(" años.");
  }
  // save the current button state for comparison next time:
  previousButtonState5 = buttonState5;

  // if the button state has changed,
  if ((buttonState6 != previousButtonState6)
      // and it's currently pressed:
      && (buttonState6 == HIGH)) {
    // increment the button counter
    counter++;
    // type out a message
    Keyboard.print("l");
    //Keyboard.print(counter);
    //Keyboard.println(" años.");
  }
  // save the current button state for comparison next time:
  previousButtonState6 = buttonState6;


  delay(20);
}
