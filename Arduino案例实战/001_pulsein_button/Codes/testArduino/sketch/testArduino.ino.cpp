#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\001_pulsein_button\\Codes\\testArduino.ino"
int button = 3;
long count = 1;
#line 3 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\001_pulsein_button\\Codes\\testArduino.ino"
void setup();
#line 8 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\001_pulsein_button\\Codes\\testArduino.ino"
void loop();
#line 3 "D:\\Github\\Arduino_Programs\\Arduino案例实战\\001_pulsein_button\\Codes\\testArduino.ino"
void setup()
{
    Serial.begin(9600);
    pinMode(button, INPUT);
}
void loop()
{
    count = pulseIn(button, HIGH, 10000000UL);
    if (count != 0)
    {
        Serial.println(count, DEC);
        count = 0;
    }
}
