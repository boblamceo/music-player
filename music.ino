#include "pitches.h"
int buzzerPin = 8;
int buttonPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}



int twinkle[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, false, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, false, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, false, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, false, NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, false, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
};

int mario[] = {
  NOTE_E5, NOTE_E5, false, NOTE_E5, false, NOTE_C5, NOTE_E5,
  NOTE_G5, false, NOTE_G4, false,
  NOTE_C5, NOTE_G4, false, NOTE_E4,
  NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5,
  false, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4,
  NOTE_C5, NOTE_G4, false, NOTE_E4,
  NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5,
  false, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4,

  false, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_DS5, NOTE_E5,
  false, NOTE_GS4, NOTE_A4, NOTE_C4, false, NOTE_A4, NOTE_C5, NOTE_D5,
  false, NOTE_DS5, false, NOTE_D5,
  NOTE_C5, false,

  false, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_DS5, NOTE_E5,
  false, NOTE_GS4, NOTE_A4, NOTE_C4, false, NOTE_A4, NOTE_C5, NOTE_D5,
  false, NOTE_DS5, false, NOTE_D5,
  NOTE_C5, false,

  NOTE_C5, NOTE_C5, NOTE_C5, false, NOTE_C5, NOTE_D5,
  NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4,

  NOTE_C5, NOTE_C5, NOTE_C5, false, NOTE_C5, NOTE_D5, NOTE_E5,
  false,
  NOTE_C5, NOTE_C5, NOTE_C5, false, NOTE_C5, NOTE_D5,
  NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4,
  NOTE_E5, NOTE_E5, false, NOTE_E5, false, NOTE_C5, NOTE_E5,
  NOTE_G5, false, NOTE_G4, false,
  NOTE_C5, NOTE_G4, false, NOTE_E4,

  NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5,
  false, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4,

  NOTE_C5, NOTE_G4, false, NOTE_E4,
  NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5,
  false, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4,

  NOTE_E5, NOTE_C5, NOTE_G4, false, NOTE_GS4,
  NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4,
  NOTE_D5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5,

  NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4,
  NOTE_E5, NOTE_C5, NOTE_G4, false, NOTE_GS4,
  NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4,
  NOTE_B4, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_D5,
  NOTE_C5, NOTE_E4, NOTE_E4, NOTE_C4,

  NOTE_E5, NOTE_C5, NOTE_G4, false, NOTE_GS4,
  NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4,
  NOTE_D5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5,

  NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4,
  NOTE_E5, NOTE_C5, NOTE_G4, false, NOTE_GS4,
  NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4,
  NOTE_B4, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_D5,
  NOTE_C5, NOTE_E4, NOTE_E4, NOTE_C4,
  NOTE_C5, NOTE_C5, NOTE_C5, false, NOTE_C5, NOTE_D5, NOTE_E5,
  false,

  NOTE_C5, NOTE_C5, NOTE_C5, false, NOTE_C5, NOTE_D5,
  NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4,
  NOTE_E5, NOTE_E5, false, NOTE_E5, false, NOTE_C5, NOTE_E5,
  NOTE_G5, false, NOTE_G4, false,
  NOTE_E5, NOTE_C5, NOTE_G4, false, NOTE_GS4,
  NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4,
  NOTE_D5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5,

  NOTE_E5, NOTE_C5, NOTE_A4, NOTE_G4,
  NOTE_E5, NOTE_C5, NOTE_G4, false, NOTE_GS4,
  NOTE_A4, NOTE_F5, NOTE_F5, NOTE_A4,
  NOTE_B4, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_D5,
  NOTE_C5, NOTE_E4, NOTE_E4, NOTE_C4,

  // Game over sound
  NOTE_C5, NOTE_G4, NOTE_E4,
  NOTE_A4, NOTE_B4, NOTE_A4, NOTE_GS4, NOTE_AS4, NOTE_GS4,
  NOTE_G4, NOTE_D4, NOTE_E4
};

int marioDurations[] = {
  8, 8, 8, 8, 8, 8, 8,
  4, 4, 8, 4,
  4, 8, 4, 4,
  4, 4, 8, 4,
  8, 8, 8, 4, 8, 8,
  8, 4, 8, 8, 4,
  4, 8, 4, 4,
  4, 4, 8, 4,
  8, 8, 8, 4, 8, 8,
  8, 4, 8, 8, 4,


  4, 8, 8, 8, 4, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  4, 4, 8, 4,
  2, 2,

  4, 8, 8, 8, 4, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  4, 4, 8, 4,
  2, 2,

  8, 4, 8, 8, 8, 4,
  8, 4, 8, 2,

  8, 4, 8, 8, 8, 8, 8,
  1,
  8, 4, 8, 8, 8, 4,
  8, 4, 8, 2,
  8, 8, 8, 8, 8, 8, 4,
  4, 4, 4, 4,
  4, 8, 4, 4,

  4, 4, 8, 4,
  8, 8, 8, 4, 8, 8,
  8, 4, 8, 8, 4,

  4, 8, 4, 4,
  4, 4, 8, 4,
  8, 8, 8, 4, 8, 8,
  8, 4, 8, 8, 4,

  8, 4, 8, 4, 4,
  8, 4, 8, 2,
  8, 8, 8, 8, 8, 8,

  8, 4, 8, 2,
  8, 4, 8, 4, 4,
  8, 4, 8, 2,
  8, 4, 8, 8, 8, 8,
  8, 4, 8, 2,

  8, 4, 8, 4, 4,
  8, 4, 8, 2,
  8, 8, 8, 8, 8, 8,

  8, 4, 8, 2,
  8, 4, 8, 4, 4,
  8, 4, 8, 2,
  8, 4, 8, 8, 8, 8,
  8, 4, 8, 2,
  8, 4, 8, 8, 8, 8, 8,
  1,

  8, 4, 8, 8, 8, 4,
  8, 4, 8, 2,
  8, 8, 8, 8, 8, 8, 4,
  4, 4, 4, 4,
  8, 4, 8, 4, 4,
  8, 4, 8, 2,
  8, 8, 8, 8, 8, 8,

  8, 4, 8, 2,
  8, 4, 8, 4, 4,
  8, 4, 8, 2,
  8, 4, 8, 8, 8, 8,
  8, 4, 8, 2,

  //game over sound
  4, 4, 4,
  8, 8, 8, 8, 8, 8,
  8, 8, 2
};

int randNumber = random(2);

bool pressed = false;

void playSong(int song[], int songDurations[]) {
  if (songDurations[0] != 0) {
    Serial.println("first");
    for (int note = 0; note < (sizeof(song)) / (sizeof(song[0])); note++) {
      tone(buzzerPin, song[note], 1000 / songDurations[note] - 1);
      delay(1000 / songDurations[note]);
    }
  } else {
    Serial.println("second");
    for (int note = 0; note < (sizeof(song)) / (sizeof(song[0])); note++) {
      tone(buzzerPin, song[note], 400);
      delay(500);
    }
  }
}
int empty[1] = {0};
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == LOW && !pressed) {
    pressed = true;
    Serial.println(randNumber);

    playSong(twinkle, empty);
    // switch (randNumber) {
    //   case 0:
    //     playSong(twinkle, { 0 });
    //     break;
    //   case 1:
    //     playSong(mario, marioDurations);
    //     break;
    //   default:
    //     break;
    // }
    randNumber = random(2);
    pressed = false;
  }
}
