# 1 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\001_blinding_led\\Codes\\testArduino.ino"

const byte ledPin = 13;

void setup()
{
    pinMode(ledPin, 0x1);
}

void loop()
{
    digitalWrite(ledPin, 0x1);
    delay(1000);
    digitalWrite(ledPin, 0x0);
    delay(1000);
}
