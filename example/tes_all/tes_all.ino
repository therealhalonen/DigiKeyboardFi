#include <DigiKeyboardFi.h>

void setup() {}

void loop() {
  DigiKeyboardFi.delay(1500);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboardFi.println("abcdefghijklmnopqrstuvwxyzåäö ABCDEFGHIJKLMNOPQRSTUVWXYZÅÄÖ 1234567890 !\"#$%&'()* +,- ./ :; <=> ? @ [\\]^ _`  {|}~ ");
  DigiKeyboardFi.sendKeyStroke(0);
  DigiKeyboardFi.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFi.sendKeyStroke(KEY_FI_A2); // å
  DigiKeyboardFi.sendKeyStroke(KEY_FI_A3); // ä
  DigiKeyboardFi.sendKeyStroke(KEY_FI_O2); // ö
  DigiKeyboardFi.sendKeyStroke(0);
  exit(1);
}
