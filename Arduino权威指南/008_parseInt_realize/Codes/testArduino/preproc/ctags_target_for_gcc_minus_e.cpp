# 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\008_parseInt_realize\\Codes\\testArduino.ino"

void setup()
{
    Serial.begin(9600);
}

long parseInt()
{
    int num = 0;
    boolean firstFlag = true;
    while (true)
    {
        if (Serial.available() > 0)
        {
            char b = Serial.read();
            if (b >= '0' && b <= '9')
            {
                num = num*10 + (b-'0');
                break;
            }
        }
    }
    while (true)
    {
        if (Serial.available() > 0)
        {
            char b = Serial.read();
            if (b >= '0' && b <= '9')
            {
                num = num*10 + (b-'0');
            }
            else
            {
                return num;
            }
        }
    }
}

void loop()
{
    if (Serial.available() > 0)
    {
        int n = parseInt();
        Serial.println(String(n));
    }

}
