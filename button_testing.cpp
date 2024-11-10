#include <iostream>

# Testing the up down left and right buttonzs

pinMode(37, INPUT_PULLUP); // config GPIO21 as input pin and enable the internal pull-up resistor
pinMode(36, INPUT_PULLUP);
pinMode(33, INPUT_PULLUP);
pinMode(31, INPUT_PULLUP);

int upState = digitalRead(UP_PIN);
int downState = digitalRead(DOWN_PIN);
int leftState = digitalRead(LEFT_PIN);
int rightState = digitalRead(RIGHT_PIN);

#define UP_PIN 37
#define DOWN_PIN 36
#define LEFT_PIN 33
#define RIGHT_PIN 31

// Variables will change:
int upLastState = HIGH; // the previous state from the input pin
int upCurrentState;     // the current reading from the input pin
int downLastState = HIGH; // the previous state from the input pin
int downCurrentState;     // the current reading from the input pin
int leftLastState = HIGH; // the previous state from the input pin
int leftCurrentState;     // the current reading from the input pin
int rightLastState = HIGH; // the previous state from the input pin
int rightCurrentState;     // the current reading from the input pin



void setup() {
  Serial.begin(9600);
  // initialize the pushbutton pin as an pull-up input
  pinMode(UP_PIN, INPUT_PULLUP);
  pinMode(DOWN_PIN, INPUT_PULLUP);
  pinMode(LEFT_PIN, INPUT_PULLUP);
  pinMode(RIGHT_PIN, INPUT_PULLUP);
}

void loop() {
  // read the state of the switch/button:
  currentState = digitalRead(UP_PIN);
  currentState = digitalRead(DOWN_PIN);
  currentState = digitalRead(LEFT_PIN);
  currentState = digitalRead(RIGHT_PIN);

  if(upLastState == LOW && upCurrentState == HIGH){
    Serial.println("The up state changed from LOW to HIGH");
  }
  if(downLastState == LOW && downCurrentState == HIGH){
    Serial.println("The down state changed from LOW to HIGH")
  }
  if(leftLastState == LOW && leftCurrentState == HIGH){
    Serial.println("The left state changed from LOW to HIGH")
  }
  if(rightLastState == LOW && rightCurrentState == HIGH){
    Serial.println("The right state changed from LOW to HIGH")
  }
  
  // save the last state
  
  upLastState = upCurrentState;
  downLastState = downCurrentState;
  leftLastState = leftCurrentState;
  rightLastState = rightCurrentState;
}
