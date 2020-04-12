/*

  Trying to bring Organization Blocks to the Arduino.
  Compatible with Uno and Mega.

  Features:
  Organization Block for Cyclic Program Processing (OB1)
  Cyclic Interrupt Organization Block (OB30-OB38)
  Hardware Interrupt Organization Block (OB40-OB45)
  Startup Organization Block (OB100)

*/

// ********** SETUP - NO NEED TO CHANGE **********
#include <Arduino.h>

#define CHANGE 1
#define FALLING 2
#define RISING 3

const long OB30_interval = 5000;
const long OB31_interval = 2000;
const long OB32_interval = 1000;
const long OB33_interval = 500;
const long OB34_interval = 200;
const long OB35_interval = 100;
const long OB36_interval = 50;
const long OB37_interval = 20;
const long OB38_interval = 10;

unsigned long OB30_previousMillis = 0;
unsigned long OB31_previousMillis = 0;
unsigned long OB32_previousMillis = 0;
unsigned long OB33_previousMillis = 0;
unsigned long OB34_previousMillis = 0;
unsigned long OB35_previousMillis = 0;
unsigned long OB36_previousMillis = 0;
unsigned long OB37_previousMillis = 0;
unsigned long OB38_previousMillis = 0;

// ********** CONFIG - THIS YOU CAN CHANGE **********

#if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega2560__)

// Uno and Mega interrupt enabled pins. Mode can be CHANGE, FALLING or RISING
bool OB40_interruptEnable = false;
const byte OB40_interruptPin = 2;
const int OB40_mode = CHANGE;

bool OB41_interruptEnable = false;
const byte OB41_interruptPin = 3;
const int OB41_mode = CHANGE;

#endif
#if defined(__AVR_ATmega2560__)

// Mega interrupt enabled pins. Mode can be CHANGE, FALLING or RISING
bool OB42_interruptEnable = false;
const byte OB42_interruptPin = 21;
const int OB42_mode = CHANGE;

bool OB43_interruptEnable = false;
const byte OB43_interruptPin = 20;
const int OB43_mode = CHANGE;

bool OB44_interruptEnable = false;
const byte OB44_interruptPin = 19;
const int OB44_mode = CHANGE;

bool OB45_interruptEnable = false;
const byte OB45_interruptPin = 18;
const int OB45_mode = CHANGE;

#endif

// ********** Organization Blocks **********

void OB1() {
  // Organization Block for Cyclic Program Processing

}

void OB30() {
  // Cyclic Interrupt Organization Block 5000ms

}

void OB31() {
    // Cyclic Interrupt Organization Block 2000ms

}

void OB32() {
    // Cyclic Interrupt Organization Block 1000ms

}

void OB33() {
    // Cyclic Interrupt Organization Block 500ms

}

void OB34() {
    // Cyclic Interrupt Organization Block 200ms

}

void OB35() {
    // Cyclic Interrupt Organization Block 100ms

}

void OB36() {
    // Cyclic Interrupt Organization Block 50ms

}

void OB37() {
    // Cyclic Interrupt Organization Block 20ms

}

void OB38() {
    // Cyclic Interrupt Organization Block 10ms

}

void OB40() {
    // Hardware Interrupt Organization Block

}

void OB41() {
    // Hardware Interrupt Organization Block

}

void OB42() {
    // Hardware Interrupt Organization Block

}

void OB43() {
    // Hardware Interrupt Organization Block

}

void OB44() {
    // Hardware Interrupt Organization Block

}

void OB45() {
    // Hardware Interrupt Organization Block

}

void OB100() {
  // Startup Organization Block

}

// ********** ARDUINO SETUP - NO NEED TO CHANGE **********

void setup() {
  Serial.begin(115200);

  #if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega2560__)
  if (OB40_interruptEnable) { pinMode(OB40_interruptPin, INPUT_PULLUP); attachInterrupt(digitalPinToInterrupt(OB40_interruptPin), OB40, OB40_mode); }
  if (OB41_interruptEnable) { pinMode(OB41_interruptPin, INPUT_PULLUP); attachInterrupt(digitalPinToInterrupt(OB41_interruptPin), OB41, OB41_mode); }
  #endif

  #if defined(__AVR_ATmega2560__)
  if (OB42_interruptEnable) { pinMode(OB42_interruptPin, INPUT_PULLUP); attachInterrupt(digitalPinToInterrupt(OB42_interruptPin), OB42, OB42_mode); }
  if (OB43_interruptEnable) { pinMode(OB43_interruptPin, INPUT_PULLUP); attachInterrupt(digitalPinToInterrupt(OB43_interruptPin), OB43, OB43_mode); }
  if (OB44_interruptEnable) { pinMode(OB44_interruptPin, INPUT_PULLUP); attachInterrupt(digitalPinToInterrupt(OB44_interruptPin), OB44, OB44_mode); }
  if (OB45_interruptEnable) { pinMode(OB45_interruptPin, INPUT_PULLUP); attachInterrupt(digitalPinToInterrupt(OB45_interruptPin), OB45, OB45_mode); }
  #endif
  
  OB100();
}

// ********** ARDUINO LOOP - NO NEED TO CHANGE **********

void loop() {
  OB1();
  if (millis() - OB30_previousMillis >= OB30_interval) { OB30_previousMillis = millis(); OB30(); }
  if (millis() - OB31_previousMillis >= OB31_interval) { OB31_previousMillis = millis(); OB31(); }
  if (millis() - OB32_previousMillis >= OB32_interval) { OB32_previousMillis = millis(); OB32(); }
  if (millis() - OB33_previousMillis >= OB33_interval) { OB33_previousMillis = millis(); OB33(); }
  if (millis() - OB34_previousMillis >= OB34_interval) { OB34_previousMillis = millis(); OB34(); }
  if (millis() - OB35_previousMillis >= OB35_interval) { OB35_previousMillis = millis(); OB35(); }
  if (millis() - OB36_previousMillis >= OB36_interval) { OB36_previousMillis = millis(); OB36(); }
  if (millis() - OB37_previousMillis >= OB37_interval) { OB37_previousMillis = millis(); OB37(); }
  if (millis() - OB38_previousMillis >= OB38_interval) { OB38_previousMillis = millis(); OB38(); }
}