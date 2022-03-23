#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
byte redPin = 4;
byte greenPin = 5;
byte bluePin = 6;

byte led1Pin = 7;
byte led2Pin = 8;

#line 8 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void led1Light();
#line 13 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void led2Light();
#line 18 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void setup();
#line 31 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void loop();
#line 8 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
void led1Light()
{
    digitalWrite(led1Pin, HIGH);
}

void led2Light()
{
    digitalWrite(led2Pin, HIGH);
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
    digitalWrite(redPin, HIGH);
    delay(3000);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(3000);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
    delay(3000);
    digitalWrite(bluePin, LOW);
}



