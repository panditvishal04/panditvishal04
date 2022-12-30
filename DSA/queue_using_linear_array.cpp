#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 10
struct queue
{
    int front;
    int rear;
    int *arr;
};
int isempty(struct queue *q)
{
    if(q->front==q->rear)
    {
        return 1;
    }
    else
    {
       return 0;
    }
}
int isfull(struct queue *q)
{
    if(q->rear==size-1)
    {
        return 1;
    }
    else
    {
      return 0;
    }
}
void enqueue(struct queue *q,int val)
{
    if(isfull(q)==1)
        {
            cout<<"queue overflow";
        }
        else
        {
          ++q->rear;
          q->arr[q->rear]=val;
        }
}
int dequeue(struct queue *q)
{
    int a=-1;
    if(isempty(q)==1)
    {
        cout<<"queue underflow";
        return 0;
    }
    else
    {
        q->front++;
        a=q->arr[q->front];
    }
    return a;
}
void display(struct queue *q)
{
    if(q->rear==-1)
    {
        cout<<"queue is empty";
    }
    cout<<"\n queue:";
    for(int i=q->front+1;i<=q->rear;i++)
    {
        cout<<q->arr[i]<<"\t";
    }
}
int main()
{
  struct queue q;
  q.front=q.rear=-1;
  q.arr=(int*)malloc(size*sizeof(int));
  int v,ch,val;
cout<<"capacity of queue is"<<size<<endl;
cout<<"enter the number of the elments of queue to be filled:";
cin>>v;
cout<<"enter the elements of the queue:"<<endl;
for(int i=0;i<v;i++)
{
    cin>>q.arr[i];
    enqueue(&q,q.arr[i]);
}
cout<<"choose one option->"<<endl;
cout<<"1.enqueue"<<endl<<"2.dequeue"<<endl;
cout<<"enter your choise:";
cin>>ch;
switch(ch)
{
    case 1:
    cout<<"enter the element you want to insert:";
    cin>>val;
    enqueue(&q,val);
    display(&q);
    break;
    case 2:
    dequeue(&q);
    display(&q);
    break;
    default:
    cout<<"inavlid option";
    break;
}
    return 0;
}