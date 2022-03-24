# 1 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
byte redPin = 4;
byte greenPin = 5;
byte bluePin = 6;

byte led1Pin = 7;
byte led2Pin = 8;

void led1Light()
{
    long oldTime = millis();
    while (millis() - oldTime < 600)
    {
        digitalWrite(led1Pin, 0x1);
        while (millis() - oldTime < 100)
        {
            ;
        }
        oldTime = millis();
        digitalWrite(led1Pin, 0x0);
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
        digitalWrite(led2Pin, 0x1);
        while (millis() - oldTime < 100)
        {
            ;
        }
        oldTime = millis();
        digitalWrite(led2Pin, 0x0);
        while (millis() - oldTime < 100)
        {
            ;
        }
        oldTime = millis();
    }
}

void setup()
{
    pinMode(2, 0x2);
    pinMode(3, 0x2);
    for (int i = 4; i <= 8; i++)
    {
        pinMode(i, 0x1);
        digitalWrite(i, 0x0);
    }
    attachInterrupt(0, led1Light, 0x0);
    attachInterrupt(1, led2Light, 1);
}

void loop()
{
    static long oldTime = millis();
    digitalWrite(redPin, 0x1);
    while (millis() - oldTime < 100)
    {
        ;
    }
    oldTime = millis();
    digitalWrite(redPin, 0x0);
    digitalWrite(greenPin, 0x1);
    while (millis() - oldTime < 100)
    {
        ;
    }
    oldTime = millis();
    digitalWrite(greenPin, 0x0);
    digitalWrite(bluePin, 0x1);
    while (millis() - oldTime < 100)
    {
        ;
    }
    oldTime = millis();
    digitalWrite(bluePin, 0x0);
}
