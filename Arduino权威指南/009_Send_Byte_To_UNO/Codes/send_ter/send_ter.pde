import processing.serial.*;

Serial myPort;

String port = "COM2";

void setup() {
    myPort = new Serial(this, port, 9600);
}

void draw() {
}
