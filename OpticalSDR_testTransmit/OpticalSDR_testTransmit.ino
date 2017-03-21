/* **Transmitter test program for UNO */
/* **Authors: Kevin Gentile ********* */
/* ********** Micah Winter  ********* */
/* ********** Kip Bodey     ********* */
/* ********************************** */
/* **Date: 2/14/2017 **************** */
/* ********************************** */


#define BAUDE_RATE 9600

#include "stdlib.h"

byte value = 0x1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(BAUDE_RATE);
}

void loop() {
  // put your main code here, to run repeatedly:
 // while(Serial.available() == 0);
    //byte value = Serial.read() - '0';
    //Serial.println(value, DEC);
    //itoa(value, str, 10); //specifies base 10 numbering
    while(Serial.available() == 0){
      Serial.write('A');
      Serial.write('B');
      //delay(100);
    }
}
