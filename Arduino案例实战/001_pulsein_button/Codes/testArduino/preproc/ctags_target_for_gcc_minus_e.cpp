# 1 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\001_pulsein_button\\Codes\\testArduino.ino"
int button = 3;
long count = 1;
void setup()
{
    Serial.begin(9600);
    pinMode(button, 0x0);
}
void loop()
{
    count = pulseIn(button, 0x1, 10000000UL);
    if (count != 0)
    {
        Serial.println(count, 10);
        count = 0;
    }
}
