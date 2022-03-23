int button = 3;
long count = 1;
void setup()
{
    Serial.begin(9600);
    pinMode(button, INPUT);
}
void loop()
{
    count = pulseIn(button, HIGH, 10000000UL);
    if (count != 0)
    {
        Serial.println(count, DEC);
        count = 0;
    }
}