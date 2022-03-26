import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import processing.serial.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class Sensor_show_processing extends PApplet {



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

float scale = PApplet.parseFloat(rectWidth) / (maxVal - minVal);

String [] sensorLabels = {"s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9", "s10", "s11", "s12"};

int labelCount = maxNumOfLabels;

public void setup() {
    
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

public void drawGrid()
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

public int xPos(int value)
{
    return origin + PApplet.parseInt(scale * value);
}

public int yPos(int index)
{
    return rectMargin + fontSize + (index * fontSize * 2);
}

public void drawBar(int yIndex, int value)
{
    rect(origin, yPos(yIndex) - fontSize, value * scale, fontSize);
}

public void draw() {
    try{
        if (myPort.available() > 0) {
            recStr = myPort.readStringUntil('@');
            if (recStr != null) {
                recStr = recStr.substring(0, recStr.length() - 1);
                println(recStr);
                String [] recStrLst = recStr.split(",");
                background(208);
                drawGrid();
                for (int i = 0; i < recStrLst.length; ++i) {
                    println(recStrLst[i]);
                    drawBar(i, Integer.parseInt(recStrLst[i].trim()));
                }
            }
        }
    }
    catch (Exception e) {
        e.printStackTrace();
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
  public void settings() {  size(600, 392); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "Sensor_show_processing" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
