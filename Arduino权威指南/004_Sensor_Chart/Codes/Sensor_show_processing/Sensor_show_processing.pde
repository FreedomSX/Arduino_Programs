import processing.serial.*;

Serial myPort;
PFont fontA;
// fontA = loadFont("FFScala-32.vlw");

char recVal;
String recStr;

int rectMargin = 40;
int fontSize = 12;
int maxNumOfLabels = fontSize;
int interval = 6;

int windowWidth = 600;
int windowHeight = rectMargin * 2 + (maxNumOfLabels + 1) * (fontSize * 2);

int rectWidth = windowWidth - rectMargin * 2;
int rectHeight = windowHeight - rectMargin * 2;
int rectCenter = rectMargin + rectWidth / 2;

int origin = rectCenter;
int minVal = -1023;
int maxVal = 1023;

float scale = float(rectWidth) / (maxVal - minVal);

String [] sensorLabels = {"s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9", "s10", "s11", "s12"};

int labelCount = maxNumOfLabels;

void setup() {
    size(600, 392);
    background(208);
    textSize(fontSize);
    fill(0 ,407, 612);
    String portName = "COM2";
    println("Connecting to -> " + portName);
    myPort = new Serial(this, portName, 9600);
    // textFont(fontA, fontSize);
    labelCount = sensorLabels.length;
    // text(minVal, 0, fontSize);
    drawGrid();
}

void drawGrid()
{
    fill(0);
    text(minVal, xPos(minVal), rectMargin-fontSize);
    line(xPos(minVal), rectMargin, xPos(minVal), rectHeight + fontSize);
    text(maxVal, xPos(maxVal), rectMargin-fontSize);
    line(xPos(maxVal), rectMargin, xPos(maxVal), rectHeight + fontSize);
    text(0, xPos(0), rectMargin-fontSize);
    line(xPos(0), rectMargin, xPos(0), rectHeight + fontSize);
    for (int i = 0; i < sensorLabels.length; ++i) {
        text(sensorLabels[i], rectMargin - fontSize * 2 - interval, yPos(i));
        text(sensorLabels[i], rectWidth + rectMargin + interval, yPos(i));
    }
}

int xPos(int value)
{
    return origin + int(scale * value);
}

int yPos(int index)
{
    return rectMargin + fontSize + (index * fontSize * 2);
}

void drawBar(int yIndex, int value)
{
    rect(origin, yPos(yIndex) - fontSize, value * scale, fontSize);
}

void draw() {
    if (myPort.available() > 0) {
        background(208);
        recStr = myPort.readStringUntil('@');
        recStr = recStr.substring(0, recStr.length() - 1);
        println(recStr);
        drawGrid();
        String [] recStrLst = recStr.split(",");
        for (int i = 0; i < recStrLst.length; ++i) {
            println(recStrLst[i]);
            drawBar(i, Integer.parseInt(recStrLst[i].trim()));
        }
    }
}

// void serialEvent(Serial p)
// {
//     if (p.available() > 0) {
//         background(255);
//         recStr = p.readStringUntil('@');
//         String [] recStrLst = recStr.split(",");
//         for (int i = 0; i < recStrLst.length; ++i) {
//             drawBar(i, Integer.parseInt(recStrLst[i]));
//         }
//     }
// }
