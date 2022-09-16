// I, Ayman Alzedawy, certify that all work is my own//

#include <Arduino.h>
unsigned long myTime;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nAyman Alzedawy, 000816506");
  
  Serial.printf("\nESP8266 Chip id = %08X\n", ESP.getChipId());
  
  Serial.printf("\nESP8266 Flash id = %08X\n", ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  myTime = millis();

  Serial.println(myTime); // prints time since program started
  delay(2000);  
}