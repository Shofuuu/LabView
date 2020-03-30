/*
 * Writed by Muhammad Shofuwan Anwar and Mukhlis Dermawan Wicaksono
 * Linux x64 Ubuntu LTS 19
 * 
 * Coded with PlatformIO
 */

#ifndef F_CPU
  #define F_CPU 16000000UL
#endif

#include <Arduino.h>
#include "parse_merge.h"

void setup() {Serial.begin(9600);}

String str_data = "";

void loop() {
  if(Serial.available() > 0){
    data = Serial.readStringUntil('\n');
    parse_string();
  }

  Serial.println(DATA_STR(0) + ";" + String(ADC_Read(0)) + ";");
  //delay(50);
  //clear_str();
}
