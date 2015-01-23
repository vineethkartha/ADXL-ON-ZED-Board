
import processing.serial.*;
import processing.net.*; 

Client myClient;
int[] vals;
int cnt=0, digit=0;
char val;
int negf=0;
char []string=new char[100];

void setup () {
  size(600, 400);
  smooth();
  vals = new int[width];
  for (int i = 0; i < vals.length; i++) {
    vals[i] = height/2;
  }
  myClient = new Client(this, "127.0.0.1", 8000); 
  background(255);
}
void draw () {
  background(0);
  stroke(0,255,255);
  strokeWeight(5);
  line(width/2, 0, width/2, height);
  line(0, height/2, width, height/2);
  
  //Draw the graph
  for (int j = 0; j < vals.length-1; j++) {
    stroke(255,255,0);
    strokeWeight(1);
    line(j, vals[j], j+1, vals[j+1]);
  }
  
  //reading and parsing data
  if (myClient.available()>0)
  {
    val=myClient.readChar();
    if (val>='0' && val<='z'|| val==' '||val=='-') {
      if(val=='-')
        negf=1;
      if (val>='0' && val<='9') {
        string[cnt]=val;
        digit=digit*10+(val-'0');
        cnt++;
      }
    } 
    else{
      println(digit);
      if(negf==1){
         digit=digit*-1;
         negf=0;
      }
      
      //Pushing the values forward to make space for new value
      for (int k = 0; k < vals.length-1; k++) {
        vals[k] = vals[k+1];
      }
      
      // Add a new  value
      vals[vals.length-1] = (height/2)-(digit*200/127);
      cnt=0;
      digit=0;
      myClient.clear();
    }
  }
}

