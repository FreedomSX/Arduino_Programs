# 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\001_word_and_byte_joint_and_divide\\Codes\\testArduino.ino"




long longVal = 0x1020304L;
char c = 127;

void setup()
{
    Serial.begin(9600);
    Serial.println(longVal);
    Serial.println(longVal, 2);
    Serial.println(((longVal) >> 16), 2);
    Serial.println(((longVal) & 0xFFFF), 2);
    Serial.println(c << 1, 2);
    c = c << 1;
    Serial.println(int(c));
    Serial.println(int(c), 2);
    Serial.println((((long)1) << 16 | ((-1) & 0x0000ffff)), 10);
    Serial.println((((long)1UL) << 16 | ((-1) & 0x0000ffff)), 10);
    Serial.println((((long)1) << 16 | ((-1) & 0x0000ffff)), 2);
    Serial.println((((long)1UL) << 16 | ((-1) & 0x0000ffff)), 2);
    long hightemp = 1UL << 16;
    Serial.println(hightemp, 2);
    Serial.println((((long)hightemp) << 16 | ((-1) & 0x0000ffff)), 2);
    Serial.println((((long)hightemp) << 16 | ((-1UL) & 0x0000ffff)), 2);
}

void loop()
{
}
