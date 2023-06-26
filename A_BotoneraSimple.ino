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
  // if the button state has changed,
  if (buttonState1 == HIGH){
    flag1 = false;
  }
  else if((buttonState1 == LOW) && (flag1 == false)){
    flag1 = true;
    Keyboard.print("f");
  }
  /////////* Boton g */////////
  // if the button state has changed,
  if (buttonState2 == HIGH){
    flag2 = false;
  }
  else if((buttonState2 == LOW) && (flag2 == false)){
    flag2 = true;
    Keyboard.print("g");
  }
  /////////* Boton h */////////
  // if the button state has changed,
  if (buttonState3 == HIGH){
    flag3 = false;
  }
  else if((buttonState3 == LOW) && (flag3 == false)){
    flag3 = true;
    Keyboard.print("h");
  }
  /////////* Boton j */////////
  // if the button state has changed,
  if (buttonState4 == HIGH){
    flag4 = false;
  }
  else if((buttonState4 == LOW) && (flag4 == false)){
    flag4 = true;
    Keyboard.print("j");
  }
  /////////* Boton k */////////
  // if the button state has changed,
  if (buttonState5 == HIGH){
    flag5 = false;
  }
  else if((buttonState5 == LOW) && (flag5 == false)){
    flag5 = true;
    Keyboard.print("k");
  }
  /////////* Boton l */////////
  // if the button state has changed,
  if (buttonState6 == HIGH){
    flag6 = false;
  }
  else if((buttonState6 == LOW) && (flag6 == false)){
    flag6 = true;
    Keyboard.print("l");
  }
  
  //Delay time
  delay(100);
}
