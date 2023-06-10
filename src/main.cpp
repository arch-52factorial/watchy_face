#include <Arduino.h>
#include "face.h"

face m(settings);

void setup() {
  m.init(); //call init in setup
}

void loop() {
  // this should never run, Watchy deep sleeps after init();
}