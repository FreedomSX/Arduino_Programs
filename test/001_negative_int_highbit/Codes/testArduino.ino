int a = -5;
int b = 5;

void setup()
{
    Serial.begin(9600);
    Serial.println(byte(a));
    Serial.println(byte(a), 2);
    Serial.println(byte(b));
    Serial.println(byte(b), 2);
    Serial.println(highByte(a));
}

void loop()
{
}