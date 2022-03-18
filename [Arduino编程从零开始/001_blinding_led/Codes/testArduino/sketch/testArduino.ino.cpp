#include <Arduino.h>
#line 1 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\001_blinding_led\\Codes\\testArduino.ino"

const byte ledPin = 13;

#line 4 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\001_blinding_led\\Codes\\testArduino.ino"
void setup();
#line 9 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\001_blinding_led\\Codes\\testArduino.ino"
void loop();
#line 4 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\001_blinding_led\\Codes\\testArduino.ino"
void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
}
