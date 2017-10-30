const int out = 8;   
const int in = 10;                 // pin 14: green LED on the LaunchPad board
const int rck = 11; 
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
int keycode1[]={0,0,0,0,1,0,0,0};
int keycode2[]={0,0,0,0,0,1,0,0};
int keycode3[]={0,0,0,0,0,0,1,0};
int keycode4[]={0,0,0,0,0,0,0,1};
int *p;
int *p0;
int beforeflag;
int a,b,c;
int number=7;
int test=3;
void shift_read(int dis,int scankey){

   
   
   switch(scankey)
   {
    default:
    break;
   case 1:
    p0=keycode1;
    break;
   case 2:
    p0=keycode2;
    break;
   case 3:
    p0=keycode3;
    break;
   case 4:
    p0=keycode4;
    break;  
    
    }
   switch(dis)
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
  
    a=digitalRead(in);
    digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p0[7]);
    digitalWrite(sck, HIGH);
    delay(1);

    b=digitalRead(in);
    digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p0[6]);
    digitalWrite(sck, HIGH);
    delay(1);

     c=digitalRead(in);
    digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p0[5]);
    digitalWrite(sck, HIGH);
    delay(1);

    digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p0[4]);
    digitalWrite(sck, HIGH);
    delay(1);

    digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p0[3]);
    digitalWrite(sck, HIGH);
    delay(1);

    digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p0[2]);
    digitalWrite(sck, HIGH);
    delay(1);

      digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p0[1]);
    digitalWrite(sck, HIGH);
    delay(1);

    digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p0[0]);
    digitalWrite(sck, HIGH);
    delay(1);
    
    

    
 
  

  for(int i=7;i>-1;i--)
  {
    digitalWrite(sck, LOW);
    delay(1);
    digitalWrite(out, p[i]);
    digitalWrite(sck, HIGH);
    delay(1);
  }
   digitalWrite(rck, HIGH);
   delay(1);
   digitalWrite(rck, LOW);
   delay(1);
   digitalWrite(rck, HIGH);
  
}

void setup() {
  pinMode(out,OUTPUT);
  pinMode(in, INPUT);
  pinMode(sck, OUTPUT);
  pinMode(rck, OUTPUT);  
   pinMode(12, OUTPUT);  
   pinMode(13, OUTPUT);  
  digitalWrite(rck, HIGH);
  digitalWrite(sck, LOW);
   digitalWrite(12, HIGH);
   digitalWrite(13, HIGH);
}



void loop() {
 
 //***************************

 for(int i=1;i<5;i++)
 {
   beforeflag=i-1;
   if(beforeflag==0)
   {beforeflag=4;}
    shift_read(number,i);
    if(a==1){
     switch(beforeflag)
  {
 
  case 1:
   
    break;
  case 2:
    number=3;
    break;
  case 3:
      number=6;
    break;
  case 4:
   number=9;
    break;
 
}
      
    }

        if(b==1){
     switch(beforeflag)
  {
 
  case 1:
     number=0;
    break;
  case 2:
   number=2;
    break;
  case 3:
       number=5;
    break;
  case 4:
   number=8;
    break;
 
}
      
    }

    
        if(c==1){
     switch(beforeflag)
  {
 
  case 1:
    
    break;
  case 2:
    number=1;
    break;
  case 3:
     number=4;
    break;
  case 4:
    number=7;
    break;
 
}
      
    }
   
   
  }
 /* shift_read(number,1);
  
   if(a==1)
  {
    number=9;
  }

   shift_read(number,2);
     if(a==1)
  {
    number=3;
  }

    shift_read(number,3);
  if(a==1)
  {
    number=6;
  }
  //*************************
 shift_read(number,1);
  
   if(b==1)
  {
    number=8;
  }

   shift_read(number,2);
     if(b==1)
  {
    number=5;
  }

    shift_read(number,3);
  if(b==1)
  {
    number=2;
  }
  //***************************
   shift_read(number,1);
  
   if(c==1)
  {
    number=7;
  }

   shift_read(number,2);
     if(c==1)
  {
    number=6;
  }

    shift_read(number,3);
  if(c==1)
  {
    number=4;
  }
*/


/*
   int flag=1; 
   if(flag==1){
    
    digitalWrite(rck, HIGH);
    delay(1);
    digitalWrite(rck, LOW);
    delay(1);
    digitalWrite(rck, HIGH);
    

    int a=digitalRead(in);
    
    digitalWrite(sck, LOW);
    delay(1);
     digitalWrite(out, p0[7]);
    digitalWrite(sck, HIGH);
    delay(1);
    
    int v=digitalRead(in);

   if(a==HIGH)
    {digitalWrite(13, LOW);}
    
   if(v==LOW)
    {digitalWrite(12, LOW);}    
   
    flag=2;
}
 */

}//loop
