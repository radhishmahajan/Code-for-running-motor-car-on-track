int a=13;
int b=12;
int c=11;
int d=10;

int b1=2;
int b2=3;
int b3=4;


int x1,x2,x3;
void setup()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);        
  
}
  void loop()
{
  x1=digitalRead(b1);
 x2=digitalRead(b2);
   x3=digitalRead(b3);
  
  
  if (x1==1&& x2==0&&  x3==0)
  {
    digitalWrite(a,0);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,0);
  }
    else if (x1==1&& x2==1 &&  x3==0)
  {
    digitalWrite(a,0);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,0);
  }
    else if (x1==1&& x2==0 &&  x3==0)
  {
    digitalWrite(a,0);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,0);
  }
    else if (x1==0&& x2==1 &&  x3==1)
  {
    digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,0);
    digitalWrite(d,0);
  }
    else if (x1==0&& x2==0 &&  x3==1)
  {
    digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,0);
    digitalWrite(d,0);
  }
   else  
  {
    digitalWrite(a,0);
    digitalWrite(b,0);
    digitalWrite(c,0);
    digitalWrite(d,0);
  }
   
  }
  