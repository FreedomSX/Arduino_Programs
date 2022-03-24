String str = "abcdefg\nhijkl";
void setup()
{
    Serial.begin(9600);
    for (int i = 0; i < str.length(); i++)
    {
        Serial.write(str[i]);
    }
    
}

void loop()
{
}

void serialEvent()
{
    while (Serial.available())
    {
        char c = Serial.read();
        if(isDigit(c))
        {
            Serial.println(String(int(c)));
        }
    }
}