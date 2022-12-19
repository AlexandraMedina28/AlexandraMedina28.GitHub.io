#include "pitches.h"
#define ACTIVATED LOW

const int PIEZO = 11;
const int LED = 13;

int buttonSong = 8;
const int BUTTON_C = 6;
const int BUTTON_AS = 4;
const int BUTTON_A = 3;
const int BUTTON_G = 2;

void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_C, INPUT_PULLUP);
  pinMode(BUTTON_A, INPUT_PULLUP);
  pinMode(BUTTON_AS, INPUT_PULLUP);
  pinMode(BUTTON_G, INPUT_PULLUP);
  pinMode (buttonSong, INPUT_PULLUP);
}

void loop(){
   if(digitalRead(BUTTON_C) == ACTIVATED){
    tone(PIEZO,NOTE_C5);
    digitalWrite(LED,HIGH);
  }
  else if(digitalRead(BUTTON_AS) == ACTIVATED){
    tone(PIEZO,NOTE_AS4);
    digitalWrite(LED,HIGH);
  }
  else if(digitalRead(BUTTON_A) == ACTIVATED){
    tone(PIEZO,NOTE_A4);
    digitalWrite(LED,HIGH);
  }
  else if(digitalRead(BUTTON_G) == ACTIVATED){
    tone(PIEZO,NOTE_G4);
    digitalWrite(LED,HIGH);
  }
  else if(digitalRead(buttonSong) == ACTIVATED){
    tone(PIEZO,NOTE_G5);
    digitalWrite(LED,HIGH);
  }
  else{
    noTone(PIEZO);
    }
  }