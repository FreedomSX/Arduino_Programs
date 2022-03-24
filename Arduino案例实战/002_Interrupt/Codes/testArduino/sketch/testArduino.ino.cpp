#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
byte redPin = 4;
byte greenPin = 5;
byte bluePin = 6;

byte led1Pin = 7;
byte led2Pin = 8;

#line 8 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void led1Light();
#line 28 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void led2Light();
#line 48 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void setup();
#line 61 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void loop();
#line 8 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void led1Light()
{
    long oldTime = millis();
    while (millis() - oldTime < 600)
    {
        digitalWrite(led1Pin, HIGH);
        while (millis() - oldTime < 100)
        {
            ;
        }
        oldTime = millis();
        digitalWrite(led1Pin, LOW);
        while (millis() - oldTime < 100)
        {
            ;
        }
        oldTime = millis();
    }
}

void led2Light()
{
    long oldTime = millis();
    while (millis() - oldTime < 600)
    {
        digitalWrite(led2Pin, HIGH);
        while (millis() - oldTime < 100)
        {
            ;
        }
        oldTime = millis();
        digitalWrite(led2Pin, LOW);
        while (millis() - oldTime < 100)
        {
            ;
        }
        oldTime = millis();
    }
}

void setup()
{
    pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
    for (int i = 4; i <= 8; i++)
    {
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
    }
    attachInterrupt(0, led1Light, LOW);
    attachInterrupt(1, led2Light, CHANGE);
}

void loop()
{
    static long oldTime = millis();
    digitalWrite(redPin, HIGH);
    while (millis() - oldTime < 100)
    {
        ;
    }
    oldTime = millis();
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    while (millis() - oldTime < 100)
    {
        ;
    }
    oldTime = millis();
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
    while (millis() - oldTime < 100)
    {
        ;
    }
    oldTime = millis();
    digitalWrite(bluePin, LOW);
}

