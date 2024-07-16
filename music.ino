#include "pitches.h"
int buzzerPin = 8;
int buttonPin = 9;
int cPin = 10;
int dPin = 11;
int ePin = 12;
int fPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(cPin, INPUT_PULLUP);
  pinMode(dPin, INPUT_PULLUP);
  pinMode(ePin, INPUT_PULLUP);
  pinMode(fPin, INPUT_PULLUP);
  Serial.begin(9600);
}



int twinkle[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, false, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, false, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, false, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, false, NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, false, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
};

int mario[] = {
  NOTE_E5,
  NOTE_E5,
  false,
  NOTE_E5,
  false,
  NOTE_C5,
  NOTE_E5,
  NOTE_G5,
  false,
  NOTE_G4,
  false,
  NOTE_C5,
  NOTE_G4,
  false,
  NOTE_E4,
  NOTE_A4,
  NOTE_B4,
  NOTE_AS4,
  NOTE_A4,
  NOTE_G4,
  NOTE_E5,
  NOTE_G5,
  NOTE_A5,
  NOTE_F5,
  NOTE_G5,
  false,
  NOTE_E5,
  NOTE_C5,
  NOTE_D5,
  NOTE_B4,
  NOTE_C5,
  NOTE_G4,
  false,
  NOTE_E4,
  NOTE_A4,
  NOTE_B4,
  NOTE_AS4,
  NOTE_A4,
  NOTE_G4,
  NOTE_E5,
  NOTE_G5,
  NOTE_A5,
  NOTE_F5,
  NOTE_G5,
  false,
  NOTE_E5,
  NOTE_C5,
  NOTE_D5,
  NOTE_B4,

  false,
  NOTE_G5,
  NOTE_FS5,
  NOTE_F5,
  NOTE_DS5,
  NOTE_E5,
  false,
  NOTE_GS4,
  NOTE_A4,
  NOTE_C4,
  false,
  NOTE_A4,
  NOTE_C5,
  NOTE_D5,
  false,
  NOTE_DS5,
  false,
  NOTE_D5,
  NOTE_C5,
  false,

  false,
  NOTE_G5,
  NOTE_FS5,
  NOTE_F5,
  NOTE_DS5,
  NOTE_E5,
  false,
  NOTE_GS4,
  NOTE_A4,
  NOTE_C4,
  false,
  NOTE_A4,
  NOTE_C5,
  NOTE_D5,
  false,
  NOTE_DS5,
  false,
  NOTE_D5,
  NOTE_C5,
  false,

  NOTE_C5,
  NOTE_C5,
  NOTE_C5,
  false,
  NOTE_C5,
  NOTE_D5,
  NOTE_E5,
  NOTE_C5,
  NOTE_A4,
  NOTE_G4,

  NOTE_C5,
  NOTE_C5,
  NOTE_C5,
  false,
  NOTE_C5,
  NOTE_D5,
  NOTE_E5,
  false,
  NOTE_C5,
  NOTE_C5,
  NOTE_C5,
  false,
  NOTE_C5,
  NOTE_D5,
  NOTE_E5,
  NOTE_C5,
  NOTE_A4,
  NOTE_G4,
  NOTE_E5,
  NOTE_E5,
  false,
  NOTE_E5,
  false,
  NOTE_C5,
  NOTE_E5,
  NOTE_G5,
  false,
  NOTE_G4,
  false,
};

int marioDurations[] = {
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  4,
  8,
  4,
  4,
  8,
  4,
  4,
  4,
  4,
  8,
  4,
  8,
  8,
  8,
  4,
  8,
  8,
  8,
  4,
  8,
  8,
  4,
  4,
  8,
  4,
  4,
  4,
  4,
  8,
  4,
  8,
  8,
  8,
  4,
  8,
  8,
  8,
  4,
  8,
  8,
  4,


  4,
  8,
  8,
  8,
  4,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  4,
  8,
  4,
  2,
  2,

  4,
  8,
  8,
  8,
  4,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  4,
  8,
  4,
  2,
  2,

  8,
  4,
  8,
  8,
  8,
  4,
  8,
  4,
  8,
  2,

  8,
  4,
  8,
  8,
  8,
  8,
  8,
  1,
  8,
  4,
  8,
  8,
  8,
  4,
  8,
  4,
  8,
  2,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  4,
  4,
  4,
  4,
  4,
  8,
  4,
  4,
};

int harry[] = {
  false, NOTE_D4,
  NOTE_G4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_D5,
  NOTE_C5,
  NOTE_A4,
  NOTE_G4, NOTE_AS4, NOTE_A4,
  NOTE_F4, NOTE_GS4,
  NOTE_D4,
  NOTE_D4,

  NOTE_G4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_D5,
  NOTE_F5, NOTE_E5,
  NOTE_DS5, NOTE_B4,
  NOTE_DS5, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_B4,
  NOTE_G4,
  NOTE_AS4,

  NOTE_D5, NOTE_AS4,
  NOTE_D5, NOTE_AS4,
  NOTE_DS5, NOTE_D5,
  NOTE_CS5, NOTE_A4,
  NOTE_AS4, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_D4,
  NOTE_D5,
  false, NOTE_AS4,

  NOTE_D5, NOTE_AS4,
  NOTE_D5, NOTE_AS4,
  NOTE_F5, NOTE_E5,
  NOTE_DS5, NOTE_B4,
  NOTE_DS5, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_AS4,
  NOTE_G4
};

int harryDurations[] = {
  2, 4,
  4, 8, 4,
  2, 4,
  2,
  2,
  4, 8, 4,
  2, 4,
  1,
  4,

  4, 8, 4,
  2, 4,
  2, 4,
  2, 4,
  4, 8, 4,
  2, 4,
  1,
  4,

  2, 4,
  2, 4,
  2, 4,
  2, 4,
  4, 8, 4,
  2, 4,
  1,
  4, 4,

  2, 4,
  2, 4,
  2, 4,
  2, 4,
  4, 8, 4,
  2, 4,
  1
};

int starwars[] = {
  NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_F5, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_G5, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_F5, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,

  NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F6, NOTE_C6,
  NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_G5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,
  NOTE_F5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,

  NOTE_C6, NOTE_G5, NOTE_G5, false, NOTE_C5,
  NOTE_D5, NOTE_D5, NOTE_AS5, NOTE_A5, NOTE_G5, NOTE_F5,
  NOTE_F5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_D5, NOTE_E5, NOTE_C6, NOTE_C6,
  NOTE_F6, NOTE_DS6, NOTE_CS6, NOTE_C6, NOTE_AS5, NOTE_GS5, NOTE_G5, NOTE_F5,
  NOTE_C6
};

int starwarsDurations[] = {
  8, 8, 8,
  2, 2,
  8, 8, 8, 2, 4,
  8, 8, 8, 2, 4,
  8, 8, 8, 2, 8, 8, 8,
  2, 2,
  8, 8, 8, 2, 4,

  8, 8, 8, 2, 4,
  8, 8, 8, 2, 8, 16,
  4, 8, 8, 8, 8, 8,
  8, 8, 8, 4, 8, 4, 8, 16,
  4, 8, 8, 8, 8, 8,

  8, 16, 2, 8, 8,
  4, 8, 8, 8, 8, 8,
  8, 8, 8, 4, 8, 4, 8, 16,
  4, 8, 4, 8, 4, 8, 4, 8,
  1
};

int nokia[] = {
  NOTE_E5, NOTE_D5, NOTE_FS4, NOTE_GS4,
  NOTE_CS5, NOTE_B4, NOTE_D4, NOTE_E4,
  NOTE_B4, NOTE_A4, NOTE_CS4, NOTE_E4,
  NOTE_A4
};

int nokiaDurations[] = {
  8, 8, 4, 4,
  8, 8, 4, 4,
  8, 8, 4, 4,
  2
};

int godfather[] = {
  false, false, false, false, NOTE_E4, NOTE_A4, NOTE_C5,

  NOTE_B4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_F4, NOTE_G4,
  NOTE_E4, NOTE_E4, NOTE_A4, NOTE_C5,
  NOTE_B4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_E4, NOTE_DS4,

  NOTE_D4, NOTE_D4, NOTE_F4, NOTE_GS4,
  NOTE_B4, NOTE_D4, NOTE_F4, NOTE_GS4,
  NOTE_A4, NOTE_C4, NOTE_C4, NOTE_G4,
  NOTE_F4, NOTE_E4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_GS4,

  NOTE_A4, false, NOTE_A4, NOTE_A4, NOTE_GS4,
  NOTE_G4, NOTE_B4, NOTE_A4, NOTE_F4,
  NOTE_E4, NOTE_E4, NOTE_G4, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_F4, NOTE_DS4,

  NOTE_E4
};

int godfatherDurations[] = {
  4,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  2,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,

  2,
  8,
  8,
  8,
  2,
  8,
  8,
  8,
  2,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  8,

  2,
  8,
  8,
  8,
  8,
  2,
  8,
  8,
  8,
  2,
  8,
  8,
  8,
  2,
  8,
  8,
  8,
  8,

  2,
  8,
  8,
  8,
  8,
};

int randNumber = random(6);

bool pressed = false;

void playSong(int song[], int songDurations[], int length) {
  if (songDurations[0] != 0) {
    for (int note = 0; note < length; note++) {
      tone(buzzerPin, song[note], 1000 / songDurations[note] - 50);
      delay(1000 / songDurations[note]);
    }
  } else {
    for (int note = 0; note < length; note++) {
      tone(buzzerPin, song[note], 400);
      delay(500);
    }
  }
}

int recordedArr[16];

for (int i = 0; i < 16; i++) {
  recordedArr[i] = 0;
}

bool recording = false;
int empty[1] = { 0 };
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == LOW && !pressed) {
    pressed = true;
    Serial.println(randNumber);
    if (randNumber == 0) {
      Serial.println("Twinkle");
      playSong(twinkle, empty, (sizeof(twinkle)) / (sizeof(twinkle[0])));
    } else if (randNumber == 4) {
      Serial.println("Mario");
      playSong(mario, marioDurations, (sizeof(mario)) / (sizeof(mario[0])));
    } else if (randNumber == 2) {
      Serial.println("Harry");
      playSong(harry, harryDurations, (sizeof(harry)) / (sizeof(harry[0])));
    } else if (randNumber == 3) {
      Serial.println("Star Wars");
      playSong(starwars, starwarsDurations, (sizeof(starwars)) / (sizeof(starwars[0])));
    } else if (randNumber == 1) {
      Serial.println("Nokia");
      playSong(nokia, nokiaDurations, (sizeof(nokia)) / (sizeof(nokia[0])));
    } else if (randNumber == 5) {
      Serial.println("Godfather");
      playSong(godfather, godfatherDurations, (sizeof(godfather)) / (sizeof(godfather[0])));
    }
    int newRandNumber = random(6);
    while (newRandNumber == randNumber) {
      newRandNumber = random(6);
    }
    randNumber = newRandNumber;
    delay(2000);
    pressed = false;
  } else if (digitalRead(cPin) == LOW) {
    tone(buzzerPin, NOTE_C4, 500);
    delay(500);
  } else if (digitalRead(dPin) == LOW) {
    tone(buzzerPin, NOTE_D4, 500);
    delay(500);
  } else if (digitalRead(ePin) == LOW) {
    if(recording){

    }
    tone(buzzerPin, NOTE_E4, 500);
    delay(500);
  } else if (digitalRead(fPin) == LOW) {
    recording = !recording;
  }
}
