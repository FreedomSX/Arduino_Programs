import processing.serial.*;

Serial myPort;

char header = 'H';
short LF = 10;

short portIndex = 1;

void setup() {
    size(512, 512);
    println(Serial.list());
    println("Connecting to -> " + Serial.list()[portIndex]);
    myPort = new Serial(this, Serial.list()[portIndex], 9600);

}

void draw() {

}

void serialEvent(Serial p)
{
    String message = myPort.readStringUntil(LF);
    if(message != null)
    {
        print(message);
        String [] data = message.split(",");
        if (data[0].charAt(0) == header && data.length > 3) {
            for (int i = 0; i < data.length - 1; ++i) {
                print("value" + i + "=" + data[i] + ", ");
            }
            println();
        }
    }
}