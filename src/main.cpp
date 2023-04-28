#include <Arduino.h>

void setup() {
  
  Serial2.begin(38400);
  Serial.begin(115200);

}

void loop() {

  Serial2.print("Q\r\n");
  Serial.println(Serial2.readString());
  //delay(100);

}

