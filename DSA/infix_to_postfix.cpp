#include<stdlib.h>
#include<iostream>
using namespace std;
#define maxsize 5
void insert();
void del();
void display();
int front=-1,rear=-1;
int queue[maxsize];
int main ()
{
  int choice;
while(choice!=4)
 {
cout<<"1.Insert an element";
cout<<"\n2.Delete an element";
cout<<"\n3.Display the queue";
cout<<"\n4.exit";
cout<<"\nEnter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
insert();
 break;
case 2:
del();
break;
 case 3:
 display();
break;
case 4:
 exit(0);
break;
 default:
cout<<"\nEnter valid choice!\n";
}
}
return 0;
}
void insert()
{
int item;
cout<<"Enter the element: ";
cin>>item;
if(rear==maxsize-1)
 {
cout<<"\nOVERFLOW\n";
return;
 }
if(front==-1&&rear==-1)
{
front=0;
rear=0;
}
else
 {
rear=rear+1;
}
queue[rear]=item;
cout<<"Value inserted!\n";
}
void del()
{
 int item;
if (front==-1||front>rear)
{
cout<<"\nUNDERFLOW\n";
return;
}
else
{
item = queue[front];
if(front == rear)
{
front=-1;
rear=-1 ;
}
else
{
front=front+1;
}
cout<<"Value deleted\n";
}
}
void display()
{
int i;
if(rear==-1)
{
cout<<"Empty queue\n";
}
else
{
     cout<<"Queue Elements are:";
}
for(i=front;i<=rear;i++)
{
cout<<queue[i];
}
cout<<"\n";
}