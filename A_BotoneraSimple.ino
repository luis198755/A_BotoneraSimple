#include "Keyboard.h"

const int buttonPin1 = 2;         // input pin for pushbutton
const int buttonPin2 = 3;         // input pin for pushbutton
const int buttonPin3 = 4;         // input pin for pushbutton
const int buttonPin4 = 5;         // input pin for pushbutton
const int buttonPin5 = 6;         // input pin for pushbutton
const int buttonPin6 = 7;         // input pin for pushbutton
// Flag for not repitting pressed key
boolean flag1 = true; 
boolean flag2 = true; 
boolean flag3 = true; 
boolean flag4 = true; 
boolean flag5 = true; 
boolean flag6 = true; 

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
  flag1 = key(buttonState1, flag1, 'f');
  /////////* Boton g */////////
  // if the button state has changed,
  flag2 = key(buttonState2, flag2, 'g');
  /////////* Boton h */////////
  // if the button state has changed,
  flag3 = key(buttonState3, flag3, 'h');
  /////////* Boton j */////////
  // if the button state has changed,
  flag4 = key(buttonState4, flag4, 'j');
  /////////* Boton k */////////
  // if the button state has changed,
  flag5 = key(buttonState5, flag5, 'k');
  /////////* Boton l */////////
  // if the button state has changed,
  flag6 = key(buttonState6, flag6, 'l');
  //Delay time
  delay(100);
}
//////////*Funciones*///////////////
boolean key(int buttonState, boolean flag, char letter){
  // if the button state has changed,
  if (buttonState == HIGH){
    flag = false;
  }
  else if((buttonState == LOW) && (flag == false)){
    flag = true;
    Keyboard.print(letter);
  }
  return flag;
}