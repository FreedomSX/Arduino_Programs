# 1 "D:\\Github\\Arduino_Programs\\test\\001_negative_int_highbit\\Codes\\testArduino.ino"
int a = -5;
int b = 5;

void setup()
{
    Serial.begin(9600);
    Serial.println(byte(a));
    Serial.println(byte(a), 2);
    Serial.println(byte(b));
    Serial.println(byte(b), 2);
    Serial.println(((uint8_t) ((a) >> 8)));
}

void loop()
{
}
