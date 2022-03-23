#include <Arduino.h>
#line 1 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\004_interrupt\\Codes\\testArduino.ino"

const byte buttonPin = 2;
PROGMEM const byte arr[] = {23,34 ,3 , 3, 4};

#line 5 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\004_interrupt\\Codes\\testArduino.ino"
void setup();
#line 16 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\004_interrupt\\Codes\\testArduino.ino"
void loop();
#line 5 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\004_interrupt\\Codes\\testArduino.ino"
void setup()
{
    Serial.begin(9600);
    // pinMode(buttonPin, OUTPUT);
    pinMode(buttonPin, INPUT);
    digitalWrite(buttonPin, HIGH);
    Serial.print(String(digitalRead(buttonPin)));
    // arr[0] = 44;
    Serial.print(String(arr[0]));
}

void loop()
{
}
