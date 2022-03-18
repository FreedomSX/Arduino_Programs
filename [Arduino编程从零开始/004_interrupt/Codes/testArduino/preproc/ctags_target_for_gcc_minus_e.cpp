# 1 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\004_interrupt\\Codes\\testArduino.ino"

const byte buttonPin = 2;

# 3 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\004_interrupt\\Codes\\testArduino.ino" 3
__attribute__((__progmem__)) 
# 3 "D:\\GitHub\\Arduino_Programs\\[Arduino编程从零开始\\004_interrupt\\Codes\\testArduino.ino"
       const byte arr[] = {23,34 ,3 , 3, 4};

void setup()
{
    Serial.begin(9600);
    // pinMode(buttonPin, OUTPUT);
    pinMode(buttonPin, 0x0);
    digitalWrite(buttonPin, 0x1);
    Serial.print(String(digitalRead(buttonPin)));
    // arr[0] = 44;
    Serial.print(String(arr[0]));
}

void loop()
{
}
