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

  Versión: V1 - Junio 2023 Solidaridad

  */
/////////////////////////////////////////////////////////////////////
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
}
///////////////*Funciones*///////////////
// Function for dettecting and sending f, g, h, j, k, l letters
boolean key(int buttonState, boolean flag, char letter){
  // if the button state has changed,
  if (buttonState == HIGH){
    flag = false;
  }
  else if((buttonState == LOW) && (flag == false)){
    flag = true;
    Keyboard.print(letter); // Printing corresponding letter
  }
  return flag;
}