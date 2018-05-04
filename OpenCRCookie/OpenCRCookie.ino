#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_D4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_A3, NOTE_B3, NOTE_B3, NOTE_D4, NOTE_D4, NOTE_B3,NOTE_B3,0,
  NOTE_D4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_A3, NOTE_B3, NOTE_B3, NOTE_D4, NOTE_D4, NOTE_B3,NOTE_B3,0,
  NOTE_B3, NOTE_B3, NOTE_CS4, NOTE_CS4, NOTE_D4, NOTE_B3, NOTE_CS4, NOTE_CS4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_D4,0,
  NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, 0
  
};

int noteDurations[] = {
  1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 22,2,
  1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 22,2,
  1, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1, 21, 21,2,
  1, 2, 2, 2, 1, 22, 2
  
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 50; thisNote++) {
    if (noteDurations[thisNote] > 20) noteDurations[thisNote]-= 20;
    int noteDuration = 400 / noteDurations[thisNote];
    tone(BDPIN_BUZZER, melody[thisNote], noteDuration);
    if (noteDurations[thisNote + 1] < 20) {
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes); 
      noTone(BDPIN_BUZZER);    
    }
    
  }
   noTone(BDPIN_BUZZER);
}

void loop() {

}

