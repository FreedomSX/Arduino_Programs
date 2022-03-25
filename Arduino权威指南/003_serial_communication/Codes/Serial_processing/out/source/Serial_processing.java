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

public class Serial_processing extends PApplet {



Serial myPort;

char header = 'H';
short LF = 10;

short portIndex = 1;

public void setup() {
    
    println(Serial.list());
    println("Connecting to -> " + Serial.list()[portIndex]);
    myPort = new Serial(this, Serial.list()[portIndex], 9600);

}

public void draw() {

}

public void serialEvent(Serial p)
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
  public void settings() {  size(512, 512); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "Serial_processing" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
