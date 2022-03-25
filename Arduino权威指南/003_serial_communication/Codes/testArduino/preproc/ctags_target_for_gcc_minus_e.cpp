# 1 "D:\\Github\\Arduino_Programs\\Arduino权威指南\\003_serial_communication\\Codes\\testArduino.ino"

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println("H, 123, 456, 789");
    delay(2000);
}
