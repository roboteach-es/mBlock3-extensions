#include "EscornabotDIY.h"

EscornabotDIY escornabot;

void setup() {
    escornabot.playNote(NOTE_BEEP, 100);
}

void loop() {
    if (escornabot.isButtonPressed("FORWARD")) {
        escornabot.playNote(NOTE_BEEP, 100);
        delay(200);
        escornabot.move(10);
    }
    if (escornabot.isButtonPressed("BACKWARD")) {
        escornabot.playNote(NOTE_BEEP, 100);
        delay(200);
        escornabot.move(-10);
    }
    if (escornabot.isButtonPressed("TURN RIGHT")) {
        escornabot.playNote(NOTE_BEEP, 100);
        delay(200);
        escornabot.turn(90);
    }
    if (escornabot.isButtonPressed("TURN LEFT")) {
        escornabot.playNote(NOTE_BEEP, 100);
        delay(200);
        escornabot.turn(-90);
    }
}
