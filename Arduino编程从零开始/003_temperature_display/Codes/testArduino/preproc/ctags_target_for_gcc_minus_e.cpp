# 1 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\003_temperature_display\\Codes\\testArduino.ino"
# 2 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\003_temperature_display\\Codes\\testArduino.ino" 2

LiquidCrystal_I2C myLcd(0x27, 16, 2);

const byte progressUnitImg[8] = {0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f};
const byte potPin = A0;
byte progressVal;
byte progressValOld;

void setup()
{
    myLcd.init();
    myLcd.backlight();
    myLcd.createChar(0, (byte*)progressUnitImg);
    Serial.begin(9600);
}

void loop()
{
    // Serial.print(analogRead(potPin));
    progressValOld = progressVal;
    progressVal = map(analogRead(potPin), 0, 1024, 0, 13);
    if(progressVal != progressValOld)
    {
        myLcd.clear();
        for (int i = 0; i < progressVal; i++)
        {
            myLcd.setCursor(i, 0);
            myLcd.write(0);
        }
        myLcd.setCursor(12, 0);
        myLcd.print(String(progressVal * 100 / 12) + String("%"));
    }
}
