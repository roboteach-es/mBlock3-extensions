// Escornabot geometry
#define WHEEL_DIAMETER 75.0f // mm
#define WHEEL_DISTANCE 75.5f // mm (ground touching point to point)

// Stepper motors
#define STEPPERMOTOR_R_IN1 5
#define STEPPERMOTOR_R_IN2 4
#define STEPPERMOTOR_R_IN3 3
#define STEPPERMOTOR_R_IN4 2
#define STEPPERMOTOR_L_IN1 9
#define STEPPERMOTOR_L_IN2 8
#define STEPPERMOTOR_L_IN3 7
#define STEPPERMOTOR_L_IN4 6
#define STEPPERMOTOR_STEPS_PER_SECOND 1000 // speed

// Buzzer
#define BUZZER_PIN 10
#define NOTE_BEEP 4699      // D8
#define NOTE_FORWARD 2637   // E7
#define NOTE_TURNLEFT 2217  // C#7
#define NOTE_TURNRIGHT 4434 // C#8
#define NOTE_BACKWARD 3520  // A7

// Keypad
// https://github.com/mgesteiro/escornakeypad
#define KEYPAD_PIN A4
#define KEYVALUE_FORWARD 560
#define KEYVALUE_TURNLEFT 480
#define KEYVALUE_GO 610
#define KEYVALUE_TURNRIGHT 240
#define KEYVALUE_BACKWARD 380
#define KEYVALUE_NONE 1010

// Led
#define SIMPLELED_PIN 13
