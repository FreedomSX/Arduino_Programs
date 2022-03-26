# 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\004_Sensor_Chart\\Codes\\testArduino.ino"

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
