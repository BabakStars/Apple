#include <Wire.h>  
#include "SSD1306.h"
#include "Images.h"
SSD1306  display(0x3c, 4, 5);

void setup() {
  
display.init();
display.flipScreenVertically();
display.clear();

}

void loop() {


display.drawXbm(34 , 1, 49 ,60 ,  (Apple)); 
display.display();
delay(2500);

}
