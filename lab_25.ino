const int d1 = 2;  
const int d2 = 3;  
const int d3 = 4;
const int a = 10;                 // pin 14: green LED on the LaunchPad board
const int b = 8;  
const int c = 13;  
const int d = 12;  
const int e = 11;
const int f = 9;  
const int g = 14;    
int count=0;
int j=0;
void zero()  
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void one() 
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void two()  
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}
void three() 
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}
void four()  
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void five() 
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void six()  
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void seven()  
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void eight()  
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void nine()  
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void setAnode(int n)
{
  if(n==1)
  {
    digitalWrite(d1, HIGH);
    digitalWrite(d2, LOW);
    digitalWrite(d3, LOW);
  }
  if(n==2)
  {
    digitalWrite(d2, HIGH);
    digitalWrite(d1, LOW);
    digitalWrite(d3, LOW);
  }
  if(n==3)
  {
    digitalWrite(d3, HIGH);
    digitalWrite(d2, LOW);
    digitalWrite(d1, LOW);
  }
  
}

void pickNumber(int x)   //定义pickNumber(x),其作用是显示数字x
{
  switch(x)
  {
  default:
    zero();
    break;
  case 1:
    one();
    break;
  case 2:
    two();
    break;
  case 3:
    three();
    break;
  case 4:
    four();
    break;
  case 5:
    five();
    break;
  case 6:
    six();
    break;
  case 7:
    seven();
    break;
  case 8:
    eight();
    break;
  case 9:
    nine();
    break;
  }
}


volatile int state = 0;           // Initialize integer state = 1 (in RAM, not CPU register) 
void setup() { 
 

  pinMode(5,INPUT_PULLUP);           // Switch 2 is connected to pin 5 on the LaunchPad 
  attachInterrupt(5,ISR_1,FALLING); 
  pinMode(4,INPUT_PULLUP);           // Switch 2 is connected to pin 5 on the LaunchPad 
  attachInterrupt(4,ISR_2,FALLING); 
    pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
 // Interrupt is fired whenever pushbutton 

} 
void loop() { 
   pickNumber(state)  ;
  }   
void ISR_1() {                       // This interrupt service routine will toggle the LED on/off 
  // toggle LED state 
  state = state+1; 
  if(state>9){state=0;}
  //digitalWrite(14,state); 
  myDelay(300);                      // Wait 300 msec for switch bounce to cease 
} 
void ISR_2() {                       // This interrupt service routine will toggle the LED on/off 
  // toggle LED state 
  state = state-1; 
  if(state<0){state=9;}
  //digitalWrite(14,state); 
  myDelay(300);                      // Wait 300 msec for switch bounce to cease 
} 


void myDelay(volatile int count) 
{ 
  // function to wait for "count" milliseconds; it does not use interrupts by avoiding "

  for (volatile int i1=0; i1 <= count; i1++) { 
    for (volatile int i2=0; i2 <= 1500; i2++) { 
    } 
  }   
} 
