#define makeLong(hi, lo) (((long)hi) << 16 | (((long)lo) & 0x0000ffff))
#define highWord(longval) ((longVal) >> 16)
#define lowWord(longval) ((longVal) & 0xFFFF)

long longVal = 0x1020304L;
char c = B01111111;

void setup()
{
    Serial.begin(9600);
    Serial.println(longVal);
    Serial.println(longVal, BIN);
    Serial.println(highWord(longVal), BIN);
    Serial.println(lowWord(longVal), BIN);
    Serial.println(c << 1, BIN);
    c = c << 1;
    Serial.println(int(c));
    Serial.println(int(c), BIN);
    Serial.println(makeLong(1, -1), DEC);
    Serial.println(makeLong(1UL, -1), DEC);
    Serial.println(makeLong(1, -1), BIN);
    Serial.println(makeLong(1UL, -1), BIN);
    long hightemp = 1UL << 16;
    Serial.println(hightemp, BIN);
    Serial.println(makeLong(hightemp, -1), BIN);
    Serial.println(makeLong(hightemp, -1UL), BIN);
}

void loop()
{
}