#include<iostream.h>
#include<conio.h>

int front=-1;
int rear=-1;
int maxsize=5;
int que[5];
void insertque(int value)
{
    if(rear==maxsize-1)
     {
      cout<<"\n overflow";
     }
     else
    {
	if(rear==-1 && front==-1)
	{
	 rear=0;
	 front=0;
	}
	else
       {
       rear+=1;
       }
  que[rear]=value;
  }
}

void deleteque()
{
int item;
if(front==-1 || front>rear)
 {
 cout<<"\n underflow";
 }
 else
  {
  item=que[front];

   if(front==rear)
   {
   front=-1;
   rear=-1;
   }
    else
    {
    front--;
     }
 cout<<"\n value is deleted";
    }
 }
void display()
{
  if(rear==-1)
   {
   cout<<"\n empty queue";
   }
 else
  {
  cout<<"\n printing values of queue";
  for(int i=front;i<=rear;i++)
   {
   cout<<que[i];
   }
  }
 }


int main()
{
clrscr();
int ch,v;
cout<<"\n 1: For Insert";
cout<<"\n 2: For Delete";
cout<<"\n 3: For Display";
cout<<"\n 4: For Exit";

do{
   cout<<"\n Enter your choice:";
   cin>>ch;

   switch(ch)
   {
   case 1: cout<<"\n insert your value";
	   cin>>v;
	   insertque(v);
	   break;
    case 2:
	  cout<<"\n delete your value";
	   //deleteque();
	   break;
    case 3:
	   cout<<"\n display value";
	  display();
	   break;
    case 4: cout<<"\n Exit";
	  break;

     }
}
while(ch!=4);

getch();
return 0;
}