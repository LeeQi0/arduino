//# display the cathor LED

const int a = 8;                 // pin 14: green LED on the LaunchPad board
const int rck = 10; 
const int sck = 9;    
//int j=0;  the . just like order register.
int digital0[]={0,0,0,0,0,0,0,1};
int digital1[]={0,1,0,0,1,1,1,1};
int digital2[]={0,0,0,1,0,0,1,0};
int digital3[]={0,0,0,0,0,1,1,0};
int digital4[]={0,1,0,0,1,1,0,0};
int digital5[]={0,0,1,0,0,1,0,0};
int digital6[]={0,0,1,0,0,0,0,0};
int digital7[]={0,0,0,0,1,1,1,1};
int digital8[]={0,0,0,0,0,0,0,0};
int digital9[]={0,0,0,0,0,1,0,0};
int *p;

void pickNumber(int x)   //定义pickNumber(x),其作用是显示数字x
{
  switch(x)
  {
  default:
    p=digital0;
    break;
  case 1:
    p=digital1;
    break;
  case 2:
    p=digital2;
    break;
  case 3:
    p=digital3;
    break;
  case 4:
    p=digital4;
    break;
  case 5:
    p=digital5;
    break;
  case 6:
    p=digital6;
    break;
  case 7:
    p=digital7;
    break;
  case 8:
    p=digital8;
    break;
  case 9:
    p=digital9;
    break;
  }
  for(int i=7;i>-1;i--)
  {
  digitalWrite(sck, LOW);
  delay(1);
  digitalWrite(a, p[i]);
  digitalWrite(sck, HIGH);
  delay(1);
  }
  digitalWrite(rck, LOW);
  delay(1);
  digitalWrite(rck, HIGH);
  delay(1);

}

void setup() {
 
  pinMode(a, OUTPUT);
 
  pinMode(sck, OUTPUT);
  pinMode(rck, OUTPUT);
 
   
    
}

void loop() {
   for(int j=0;j<10;j++){
      pickNumber(j);
      delay(1000);
   }

}
