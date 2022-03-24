#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\002_send_string_with_per_char\\Codes\\testArduino.ino"
String str = "abcdefg\nhijkl";
#line 2 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\002_send_string_with_per_char\\Codes\\testArduino.ino"
void setup();
#line 12 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\002_send_string_with_per_char\\Codes\\testArduino.ino"
void loop();
#line 16 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\002_send_string_with_per_char\\Codes\\testArduino.ino"
void serialEvent();
#line 2 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\002_send_string_with_per_char\\Codes\\testArduino.ino"
void setup()
{
    Serial.begin(9600);
    for (int i = 0; i < str.length(); i++)
    {
        Serial.write(str[i]);
    }
    
}

void loop()
{
}

void serialEvent()
{
    while (Serial.available())
    {
        char c = Serial.read();
        if(isDigit(c))
        {
            Serial.println(String(int(c)));
        }
    }
    
}
