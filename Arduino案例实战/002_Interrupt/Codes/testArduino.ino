byte redPin = 4;
byte greenPin = 5;
byte bluePin = 6;

byte led1Pin = 7;
byte led2Pin = 8;

void led1Light()
{
    long oldTime = millis();
    while (true)
    {
        if (millis() - oldTime < 1000)
        {
            digitalWrite(led1Pin, HIGH);
            oldTime = millis();
        }
    }
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
