/*
 NewToneLib is a simple library, intended for devices which do not support built-in tone() function.
 This example shows how to use the NewToneLib's tone() function.
 
 NOTE: The tone() function does not support using multiple pins simultaneously.

 created   Jan 2020
 by Yordan Yordanov, BG

 GITHUB: 

 */

#include "NewToneLib.h"
MyTone t(false);

#define buzzerPin 10 //selected pin
void setup() {
  //freq in Hz; min = 31Hz; max = 333Hz
  //duration in milliseconds; max = 4290000‬ms
  //duty cycle is 50%
  //pin shoud be declared as output in setup
  pinMode(buzzerPin, OUTPUT); //pin declared as OUTPUT
  t.tone(buzzerPin, 4000, 600);//pin, frequency(Hz), duration(ms)
}

void loop() {
}
