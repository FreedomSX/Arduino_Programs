# 1 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\002_temperature_convert\\Codes\\testArduino.ino"

const byte LM35Pin = A0;

void setup()
{
    pinMode(LM35Pin, 0x0);
    int degc = analogRead(LM35Pin) * 0.488;
    int degf = degc * 9 / 5 + 32;
    Serial.begin(9600);
    Serial.print(degf);
}

void loop()
{
}
