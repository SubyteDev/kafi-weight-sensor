

#include "HX711.h"

#define DOUT  A0
#define CLK  A1

HX711 scale(DOUT, CLK);

float calibration_factor = -1485; //-1485 worked for my 500g max setup

void setup() {
  Serial.begin(9600);
  scale.set_scale();
  scale.tare();  //Reset the scale to 0
  Serial.println("READY");
}

void loop() {
  if(Serial.available())
  {
    char temp = Serial.read();
    if(temp == 'G'){
      scale.set_scale(calibration_factor); //Adjust to this calibration factor
      Serial.println(scale.get_units(5), 1);
      }
  }
}
