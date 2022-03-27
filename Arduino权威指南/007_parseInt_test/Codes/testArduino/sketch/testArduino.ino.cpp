#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\007_parseInt_test\\Codes\\testArduino.ino"

#line 2 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\007_parseInt_test\\Codes\\testArduino.ino"
void setup();
#line 7 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\007_parseInt_test\\Codes\\testArduino.ino"
void loop();
#line 2 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\007_parseInt_test\\Codes\\testArduino.ino"
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if (Serial.available())
    {
        Serial.print(Serial.parseInt());
    }
}
