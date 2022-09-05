#define a 3
#define b 4
#define c 7
#define d 8
#define e 9
#define f 5
#define g 6
int count=0;
bool x=false;
void setup() 
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(10,INPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() 
{
  Serial.println(count);
  /*if(digitalRead(2)==0)//faulty if ladder
  {
    x=true;
  }
  if(x && digitalRead(2)!=0)
  {
    count++;
    x=false;
  }*/
  if(digitalRead(2) == 0)//entry
  {
    if(!x) 
    {
      count++;
    }
    x = true;
  }
  else if(digitalRead(10) == 0)//exit
  {
      if(!x) 
      {
        count--;
      }
      x = true;
  }
  else 
  {
      x = false;
  }
  switch (count)
  {
    case 0:
      Zero();
      break;
    case 1:
      One();
      break;
    case 2:
      Two();
      break;
    case 3:
      Three();
      break;
    case 4:
      Four();
      break;
    case 5:
      Five();
      break;
    case 6:
      Six();
      break;
    case 7:
      Seven();
      break;
    case 8:
      Eight();
      break;
    case 9:
      Nine();
      break;
    default:
      Zero();
      break;
  }
}
void Zero()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0); 
}
void One()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
void Two()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
}
void Three()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
}
void Four()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void Five()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void Six()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void Seven()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
void Eight()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void Nine()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
