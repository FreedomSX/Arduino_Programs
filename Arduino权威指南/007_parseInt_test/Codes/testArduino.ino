
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if (Serial.available())
    {
        Serial.print(Serial.parseInt());
    }
}