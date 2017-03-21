/* **Transmitter test program for UNO */
/* **Authors: Kevin Gentile ********* */
/* ********** Micah Winter  ********* */
/* ********** Kip Bodey     ********* */
/* ********************************** */
/* **Date: 2/14/2017 **************** */
/* ********************************** */


#define BAUDE_RATE 9600

#include "stdlib.h"

<<<<<<< HEAD
byte value = 0x1;
=======
>>>>>>> 53e49e5d69960cdc5999e047cba611ec35d0b67d

void setup() {
  // put your setup code here, to run once:
  Serial.begin(BAUDE_RATE);
}

void loop() {
  // put your main code here, to run repeatedly:
<<<<<<< HEAD
 // while(Serial.available() == 0);
    //byte value = Serial.read() - '0';
    //Serial.println(value, DEC);
    //itoa(value, str, 10); //specifies base 10 numbering
    while(Serial.available() == 0){
      Serial.write('A');
      Serial.write('B');
      //delay(100);
    }
=======
  while(Serial.available() == 0);
    byte value = Serial.read() - '0';
    //Serial.println(value, DEC);
    //itoa(value, str, 10); //specifies base 10 numbering
    delay(100);
    Serial.write(value);
>>>>>>> 53e49e5d69960cdc5999e047cba611ec35d0b67d
}
