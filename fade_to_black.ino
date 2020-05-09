#include "pitches.h"
void setup() {
  int pinBase = 10, pinSolo = 8, pinEnable = 7;
  pinMode(pinEnable, INPUT);
  int base[] = {
    //Repeat first four compass 5 times

    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 01
    A3,  FS4, G4, FS4, A3,  FS4, D4, FS4,   //Compasso 02
    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 03
    CS4, E4,  A4, E4,  CS4, E4,  A3, E4,    //Compasso 04

    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 05
    A3,  FS4, G4, FS4, A3,  FS4, D4, FS4,   //Compasso 06
    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 07
    CS4, E4,  A4, E4,  CS4, E4,  A3, E4,    //Compasso 08

    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 09
    A3,  FS4, G4, FS4, A3,  FS4, D4, FS4,   //Compasso 10
    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 11
    CS4, E4,  A4, E4,  CS4, E4,  A3, E4,    //Compasso 12

    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 13
    A3,  FS4, G4, FS4, A3,  FS4, D4, FS4,   //Compasso 14
    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 15
    CS4, E4,  A4, E4,  CS4, E4,  A3, E4,    //Compasso 16

    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 17
    A3,  FS4, G4, FS4, A3,  FS4, D4, FS4,   //Compasso 18
    B3,  FS4, G4, FS4, B3,  FS4, D4, FS4,   //Compasso 19
    CS4, E4,  A4, E4,  CS4, E4,  A3, E4,    //Compasso 20

    F3,  C4, D4,  F3, GS3,  B3,  E4, B3,    //Compasso 21
    B3,  E4, GS4, B3, E4,   GS4, B4, D5,    //Compasso 22
    A4,                                     //Compasso 23
  };
  float durationBase[] = {
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 01
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 02
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 03
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 04

    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 05
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 06
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 07
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 08

    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 09
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 10
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 11
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 12

    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 13
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 14
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 15
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 16

    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 17
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 18
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 19
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 20

    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 21
    8, 8, 8, 8, 8, 8, 8, 8, //Compasso 22
    1,                      //Compasso 23
  };
  int solo[] {
    SLC,                                                   //Compasso 01
    SLC,                                                   //Compasso 02
    SLC,                                                   //Compasso 03
    SLC, SLC, B4, D5, FS5,                                 //Compasso 04

    B4, FS5, G5, A5, G5, A5,                               //Compasso 05
    B5, A5, G5, G5, A5,                                    //Compasso 06
    B5, A5, G5, FS5, G5, FS5, E5, FS5,                     //Compasso 07
    FS5, G5, FS5, E5, FS5, E5, D5,                         //Compasso 08

    A4, B4, D5,                                            //Compasso 09
    CS5, D5, CS5, G5,                                      //Compasso 10
    FS5, G5,                                               //Compasso 11
    A5, D6, FS6,                                           //Compasso 12

    B6, FS6, D6, B5, G6, FS6, D6, A5, E6, D6, CS6, B5, A5, //compasso 13
    A5, A5, B5, E5, E5, FS5,                               //Compasso 14,
    A5, B5, CS6, D6, CS6, D6, CS6, B5, CS6, D6,            //Compasso 15
    CS6, B6, A6, G6, G6, A6,                               //Compasso 16

    FS6, D6, B5, FS6, G6,                                  //Compasso 17
    FS6, D6, A5, FS6, G6,                                  //Compasso 18
    FS6, D6, A6, G6,                                       //Compasso 19
    FS6, SLC,                                              //Compasso 20

    A4, B4, C5, D5, E5, F5, G5, A5,                        //Compasso 21
    B5, C6, D6, E6, F6, G6, F6, G6, F6, D6,                //Compasso 22
    E6,                                                    //Compasso 23
  };
  // note durations: 4 = quarter note, 8 = eighth note, etc.:

  float durationSolo[] {

    1,                                                  //Compasso 01
    1,                                                  //Compasso 02
    1,                                                  //Compasso 03
    2, 8, 8, 8, 8,                                      //Compasso 04

    2.666, 16, 16, 2.666, 16, 16,                       //Compasso 05
    6, 6, 6, 16, 1.777,                                 //Compasso 06
    16, 16, 8, 8, 8, 8, 8, 8,                           //Compasso 07
    16, 8, 5.333, 8, 5.997, 5.997, 5.997,               //Compasso 08

    4, 1.6, 8,                                          //Compasso 09
    1.6, 8, 8, 8,                                       //Compasso 10
    1.142, 8,                                           //Compasso 11
    1.142, 16, 16,                                      //Compasso 12

    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 4,  //Compasso 13
    2.666, 16, 16, 2.666, 16, 16,                       //Compasso 14,
    8, 8, 8, 8, 23.952, 23.952, 23.952, 8, 8, 8,        //Compasso 15
    8, 8, 8, 2.666, 8, 8,                               //Compasso 16

    4, 8, 2.666, 8, 8,                                  //Compasso 17
    4, 8, 2.666, 8, 8,                                  //Compasso 18
    4, 8, 2.666, 4,                                     //Compasso 19
    1.333, 4,                                           //Compasso 20

    8, 8, 8, 8, 8, 8, 8, 8,                             //Compasso 21
    8, 8, 8, 8, 8, 8, 23.952, 23.952, 23.952, 8,        //Compasso 22
    1,                                                 //Compasso 23
  };


  const int  BASE = 0, SOLO = 1;


  int play = SOLO;

  switch (play) {
    case BASE:
      for (int thisNote = 0; thisNote < sizeof(base) / sizeof(int); thisNote++) {
        int noteDuration = 2000 / durationBase[thisNote];
        tone(pinBase, base[thisNote], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.1;
        delay(pauseBetweenNotes);
        noTone(pinBase);
      }
      break;
    case SOLO:
      for (int thisNote = 0; thisNote < sizeof(solo) / sizeof(int); thisNote++) {
        int noteDuration = 2000 / durationSolo[thisNote];
        tone(pinSolo, solo[thisNote], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.1;
        delay(pauseBetweenNotes);
        noTone(pinSolo);
      }
      break;
  }
}


void loop() {
  // no need to repeat the melody.
}
