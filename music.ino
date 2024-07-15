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

bool pressed = false;

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == LOW && !pressed) {
    pressed = true;
    for (int note : twinkle) {
      tone(buzzerPin, note, 1000);
      delay(1000);
    }

    pressed = false;
  }
}
