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

  Versión: V2 - Junio 2023 Aniversario Solidaridad

  */
/////////////////////////////////////////////////////////////////////
#include <Keyboard.h>

const int buttonPin1 = 2;  // Pin for the first push button
const int buttonPin2 = 3;  // Pin for the second push button
// Add more button pins if needed

void setup() {
  // Set the button pins as INPUT with internal pull-up resistors enabled
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  // Add more button pins if needed

  // Initialize the Keyboard library
  Keyboard.begin();
}

void loop() {
  // Check the state of each push button
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  // Add more button states if needed

  // Check if a button is pressed (buttonState is LOW when the button is pressed due to the pull-up resistor)
  if (buttonState1 == LOW) {
    // Simulate a key press for the letter 'A'
    Keyboard.press('d');
    // You can add some delay if needed to control how long the key is held down
    delay(100);
  } else {
    // Release the key if the button is not pressed
    Keyboard.release('d');
  }

  if (buttonState2 == LOW) {
    // Simulate a key press for the letter 'B'
    Keyboard.press('w');
    // You can add some delay if needed to control how long the key is held down
    delay(100);
  } else {
    // Release the key if the button is not pressed
    Keyboard.release('w');
  }

  // Add more button actions if needed

  // You may also want to add some small delays to debounce the buttons
  delay(50);
}
/*
// Librerías
#include "Keyboard.h"

#define CantidadBoton 6
//Pines de salida designados en el mCU
int bottonPin[CantidadBoton] = {2, 3, 4, 5, 6, 7};
// Flag for not repitting pressed key
boolean flag[CantidadBoton] = {true, true, true, true, true, true};
 
void setup() {
  // make the pushButton pin an input:
  for (int i=0; i<CantidadBoton; i=i+1){
    pinMode(bottonPin[i], INPUT_PULLUP);
  }
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the pushbutton:
  int buttonState[CantidadBoton];
  int j = 0;
  for (int i=0; i<CantidadBoton; i=i+1){
    // Read button state from 2-7 pins
    buttonState[i] = digitalRead(bottonPin[i]);
    if (i == 3){
      // Skipping 'i' letter
      j = j + 1;
    }
    // Function for dettecting and sending f, g, h, j, k, l letters
    flag[i] = key(buttonState[i], flag[i], (102+j));
    j=j+1;
  }
  //Delay time
  delay(50);
}*/
///////////////*Funciones*///////////////
// Function for dettecting and sending f, g, h, j, k, l letters
/*boolean key(int buttonState, boolean flag, char letter){
  // if the button state has changed,
  if (buttonState == HIGH){
    flag = false;
  }
  else if((buttonState == LOW) && (flag == false)){
    flag = true;
    Keyboard.print(letter); // Printing corresponding letter
  }
  return flag;
}*/