//////////////////**Code for Arduino Leonardo**//////////////////////
/*
  Keyboard Message test

  For the Arduino Leonardo and Micro.

  Sends a text string when a button is pressed.

  The circuit:
  - pushbutton attached from pin 4 to +5V
  - Input Pullup from 2 to 7

  created 2023
  by Luis A. Rodríguez

  Versión: V3 - Junio 2023 Aniversario Solidaridad

  */
/////////////////////////////////////////////////////////////////////
#include <Keyboard.h>

const int buttonPin1 = 2;  // Pin for the "w" push button
const int buttonPin2 = 3;  // Pin for the "d" push button
const int buttonPin3 = 4;  // Pin for the "s" push button
const int buttonPin4 = 5;  // Pin for the "a" push button
const int buttonPin5 = 6;  // Pin for the " " push button
// Add more button pins if needed

void setup() {
  // Set the button pins as INPUT with internal pull-up resistors enabled
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  // Add more button pins if needed

  // Initialize the Keyboard library
  Keyboard.begin();
}

void loop() {
  // Check the state of each push button
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  int buttonState4 = digitalRead(buttonPin4);
  int buttonState5 = digitalRead(buttonPin5);
  // Add more button states if needed

  // Check if a button is pressed (buttonState is LOW when the button is pressed due to the pull-up resistor)
  if (buttonState1 == LOW) {
    // Simulate a key press for the letter 'w'
    Keyboard.press('w');
    // You can add some delay if needed to control how long the key is held down
    delay(100);
  } else {
    // Release the key if the button is not pressed
    Keyboard.release('w');
  }

  if (buttonState2 == LOW) {
    // Simulate a key press for the letter 'd'
    Keyboard.press('d');
    // You can add some delay if needed to control how long the key is held down
    delay(100);
  } else {
    // Release the key if the button is not pressed
    Keyboard.release('d');
  }

  if (buttonState3 == LOW) {
    // Simulate a key press for the letter 's'
    Keyboard.press('s');
    // You can add some delay if needed to control how long the key is held down
    delay(100);
  } else {
    // Release the key if the button is not pressed
    Keyboard.release('s');
  }

  if (buttonState4 == LOW) {
    // Simulate a key press for the letter 'a'
    Keyboard.press('a');
    // You can add some delay if needed to control how long the key is held down
    delay(100);
  } else {
    // Release the key if the button is not pressed
    Keyboard.release('a');
  }

  if (buttonState5 == LOW) {
    // Simulate a key press for the letter ' '
    Keyboard.press(' ');
    // You can add some delay if needed to control how long the key is held down
    delay(100);
  } else {
    // Release the key if the button is not pressed
    Keyboard.release(' ');
  }

  // Add more button actions if needed

  // You may also want to add some small delays to debounce the buttons
  delay(50);
}