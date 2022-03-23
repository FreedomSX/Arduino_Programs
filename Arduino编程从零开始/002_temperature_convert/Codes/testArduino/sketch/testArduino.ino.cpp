#include <Arduino.h>
#line 1 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\002_temperature_convert\\Codes\\testArduino.ino"

const byte LM35Pin = A0;

#line 4 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\002_temperature_convert\\Codes\\testArduino.ino"
void setup();
#line 13 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\002_temperature_convert\\Codes\\testArduino.ino"
void loop();
#line 4 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\002_temperature_convert\\Codes\\testArduino.ino"
void setup()
{
    pinMode(LM35Pin, INPUT);
    int degc = analogRead(LM35Pin) * 0.488;
    int degf = degc * 9 / 5 + 32;
    Serial.begin(9600);
    Serial.print(degf);
}

void loop()
{
}
