
const byte LM35Pin = A0;

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