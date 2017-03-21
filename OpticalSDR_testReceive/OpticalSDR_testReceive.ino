/* **Transmitter test program for MEGA */
/* **Authors: Micah Winter  ********** */
/* ********** Kip Bodey     ********** */
/* ********** Kevin Gentile ********** */
/* *********************************** */
/* **Date:    2/14/2017 ************** */
/* *********************************** */


/*
Serial1 on pins 19 (RX) and 18 (TX) 
Serial2 on pins 17 (RX) and 16 (TX)
Serial3 on pins 15 (RX) and 14 (TX) 
*/

//Receiver Code

byte str;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
<<<<<<< HEAD
  int i=1;
=======
  int i=0;
>>>>>>> 53e49e5d69960cdc5999e047cba611ec35d0b67d

  if (Serial1.available()) {
    delay(100); //allows all serial sent to be received together
      str = Serial1.read();
      //str = str >> 1;
    Serial.println(str)-'0';
  }
}
