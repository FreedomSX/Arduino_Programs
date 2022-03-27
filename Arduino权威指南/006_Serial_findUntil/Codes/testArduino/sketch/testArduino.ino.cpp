#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\006_Serial_findUntil\\Codes\\testArduino.ino"

#line 2 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\006_Serial_findUntil\\Codes\\testArduino.ino"
void setup();
#line 7 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\006_Serial_findUntil\\Codes\\testArduino.ino"
void loop();
#line 2 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\006_Serial_findUntil\\Codes\\testArduino.ino"
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available() > 0)
    {
        // Serial.findUntil(string1, string2), string1查找并读取到目标字符串, 如果没有目标字符串, string2查找并读取到结束字符串,
        Serial.println("find abc: " + String(Serial.findUntil("abc", "de")));
        Serial.println(Serial.readString());
        // Serial.flush();
    }
}


