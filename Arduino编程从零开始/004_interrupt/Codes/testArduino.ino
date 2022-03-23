
const byte buttonPin = 2;
PROGMEM const byte arr[] = {23,34 ,3 , 3, 4};

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