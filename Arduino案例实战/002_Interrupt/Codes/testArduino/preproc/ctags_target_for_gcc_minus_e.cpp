# 1 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\002_Interrupt\\Codes\\testArduino.ino"
byte redPin = 4;
byte greenPin = 5;
byte bluePin = 6;

byte led1Pin = 7;
byte led2Pin = 8;

void led1Light()
{
    digitalWrite(led1Pin, 0x1);
}

void led2Light()
{
    digitalWrite(led2Pin, 0x1);
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
    digitalWrite(redPin, 0x1);
    delay(3000);
    digitalWrite(redPin, 0x0);
    digitalWrite(greenPin, 0x1);
    delay(3000);
    digitalWrite(greenPin, 0x0);
    digitalWrite(bluePin, 0x1);
    delay(3000);
    digitalWrite(bluePin, 0x0);
}
