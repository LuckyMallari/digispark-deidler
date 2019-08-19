#define KEY_TO_SEND   0x47  // Scroll Lock
#define INTERVAL_MS   60000 // 1 minute
#define IS_SEND_TWICE       // If defined, key gets sent again after 1 sec. Comment out to disable

#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_TO_SEND);
  DigiKeyboard.delay(INTERVAL_MS);

#ifdef IS_SEND_TWICE
  DigiKeyboard.sendKeyStroke(KEY_TO_SEND);
  DigiKeyboard.delay(1000);
#endif
}
