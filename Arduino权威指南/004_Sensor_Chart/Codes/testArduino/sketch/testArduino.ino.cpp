#include <Arduino.h>
#line 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\004_Sensor_Chart\\Codes\\testArduino.ino"

#line 2 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\004_Sensor_Chart\\Codes\\testArduino.ino"
void setup();
#line 8 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\004_Sensor_Chart\\Codes\\testArduino.ino"
void loop();
#line 2 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\004_Sensor_Chart\\Codes\\testArduino.ino"
void setup()
{
    Serial.begin(9600);

}

void loop()
{
    Serial.print(String(analogRead(A0)) + ",");
    Serial.print(String(analogRead(A1)) + ",");
    Serial.print(String(analogRead(A2)) + "@");
    delay(1000);
}
