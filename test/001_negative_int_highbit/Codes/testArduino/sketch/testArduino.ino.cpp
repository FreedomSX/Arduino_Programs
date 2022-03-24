#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\test\\001_negative_int_highbit\\Codes\\testArduino.ino"
int a = -5;
int b = 5;

#line 4 "D:\\Github\\Arduino_Programs\\test\\001_negative_int_highbit\\Codes\\testArduino.ino"
void setup();
#line 14 "D:\\Github\\Arduino_Programs\\test\\001_negative_int_highbit\\Codes\\testArduino.ino"
void loop();
#line 4 "D:\\Github\\Arduino_Programs\\test\\001_negative_int_highbit\\Codes\\testArduino.ino"
void setup()
{
    Serial.begin(9600);
    Serial.println(byte(a));
    Serial.println(byte(a), 2);
    Serial.println(byte(b));
    Serial.println(byte(b), 2);
    Serial.println(highByte(a));
}

void loop()
{
}
