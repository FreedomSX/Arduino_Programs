
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available() > 0)
    {
        // Serial.findUntil(string1, string2), string1查找并读取到目标字符串, 如果没有目标字符串, string2查找并读取到结束字符串,
        Serial.println("find abc: " + String(Serial.findUntil("abc", "de")));
        Serial.println(Serial.readString());
        // Serial.flush();
    }
}

/* 
IN: 
2abcdex
OUT: 
find abc: 1
dex

IN: 
2aabbcdex
OUT: 
find abc: 0
x
 */