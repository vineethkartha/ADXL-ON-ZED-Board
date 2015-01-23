import processing.net.*; 
Client myClient; 
PImage img1,img2;
int clicks;
char val;
int i=0,flag=0;
float angle=0;
int rotflagneg=0,rotflagpos=0;
float c;

int xpos=0,ypos=200;
char []string=new char[100];
void setup() { 
  //size (330, 420);
  myClient = new Client(this, "198.10.10.1", 8000); 
  img1 = loadImage("happy.jpg");
  img2 = loadImage("sad.jpg");
  size (img1.width, img1.height);
} 

void draw() { 
  val=myClient.readChar();
  if(val>='0' && val<='z'|| val==' '||val=='-'){
    if(val>='0' && val<='9'||val=='-'){
      string[i]=val;
      i++;
    }
  }
  else
  {
   String str2 = new String(string);
   println(str2);
   i=0;
   if(str2.charAt(0)=='-'){
     if(rotflagneg==0)
     {
         if(angle>=29*TWO_PI)
         {
            rotflagneg=1;
            rotflagpos=0;
            //image(img2,0,0);
         }
         else
         {
            angle+=1;
            translate(width/2, height/2);
            rotate(angle*TWO_PI/360);
           translate(-img1.width/2, -img1.height/2);
            image(img1,0,0);
         }
     }     
   }
   else
   {
     if(rotflagpos==0)
     {
         if(angle<=0)
         {
            rotflagneg=0;
            rotflagpos=1;
            image(img1,0,0);
         }
         else
         {
            angle-=1;
            translate(width/2, height/2);
            rotate(angle*TWO_PI/360);
           translate(-img1.width/2, -img1.height/2);
            image(img1,0,0);
         }
     }
   }
   myClient.clear();
  }
  
   
  
} 
