#include <TM1637Display.h>

#define CLK 2
#define DIO 3

TM1637Display display(CLK, DIO);

void setup() {
  display.setBrightness(7);  // 0 to 7
}

void loop() {
  display.showNumberDec(1234); // Display number
  delay(2000);

  display.showNumberDec(5678);
  delay(2000);
}
