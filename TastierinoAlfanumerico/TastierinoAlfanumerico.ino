/**
* Source code:
* https://www.italiantechproject.it/tutorial-arduino/tastierino-alfanumerico
*/
#include <Keypad.h>
#define ROWS 4
#define COLS 4
 
char keymap[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'},
};
byte rowPins[ROWS] = {8, 7, 6, 5};
byte colPins[COLS] = {4, 3, 2, 1};
 
Keypad keypad = Keypad(makeKeymap(keymap), rowPins, colPins, ROWS, COLS);
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  char key = keypad.getKey();
  if (key) {
    Serial.print("Tasto premuto: ");
    Serial.println(key);
  }
}