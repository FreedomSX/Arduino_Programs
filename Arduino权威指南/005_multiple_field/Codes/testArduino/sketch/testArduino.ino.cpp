#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\005_multiple_field\\Codes\\testArduino.ino"
// #define NUM_OF_FIELD 3
const int NUM_OF_FIELD = 3;

int fieldIndex = 0;
int values[NUM_OF_FIELD] = {0};

#line 7 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\005_multiple_field\\Codes\\testArduino.ino"
void setup();
#line 12 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\005_multiple_field\\Codes\\testArduino.ino"
void loop();
#line 7 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\005_multiple_field\\Codes\\testArduino.ino"
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if (Serial.available())
    {
        char c = Serial.read();
        if (c <= '0' && c >= '9')
        {
            values[fieldIndex] = values[fieldIndex] * 10 + (c - '0');
        }
        else if (c = ',')
        {
            fieldIndex++;
        }
        else
        {
            for (int i = 0; i < min(NUM_OF_FIELD, fieldIndex + 1); i++)
            {
                Serial.print(values[i]);
                values[i] = 0;
            }
            fieldIndex = 0;
        }
    }
    
}
