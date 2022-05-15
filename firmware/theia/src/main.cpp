#include <Arduino.h>

void setup() {
Serial.begin(115200);

}

void loop() {
Serial.println("MOSI");
Serial.println(MOSI);

Serial.println("MISO");
Serial.println(MISO);

Serial.println("SCK");
Serial.println(SCK);

Serial.println("SS");
Serial.println(SS);

//Serial.println("MOSI");
//Serial.println(RST);

}