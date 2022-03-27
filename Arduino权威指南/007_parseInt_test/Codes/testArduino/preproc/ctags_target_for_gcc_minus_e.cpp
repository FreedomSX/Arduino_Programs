# 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\007_parseInt_test\\Codes\\testArduino.ino"

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
