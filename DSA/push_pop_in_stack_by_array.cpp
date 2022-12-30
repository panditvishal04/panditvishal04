#include<iostream>
#define n 10
using namespace std; 
int s[n],i,c=0,top;
void push();
void pop();
void show(); 
int main()
{
    cout<<"enter size of stack";
    cin>>top;
    cout<<"enter elements";
    for(i=1;i<=top;i++)
    {
        cin>>s[i];
    }
    cout<<"\nchoose one option";
    cout<<"\n1.push"<<"\n2.pop"<<"\n3.exit";
    cout<<"\nenter your choice=";
    cin>>c;
    switch(c)
    {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            exit;
            break;
        }
        default:
        {
            cout<<"enter valid choice";
        }
    }
    show();
    return 0;
}
void push()
{
    int v;
    if(top==n)
    {
        cout<<"\noverflow";
    }
    else
    {
       top=top++;
    }
    cout<<"\nenter the value";
    cin>>v;
    s[top]=v;
}
void pop()
{
    if(top==-1)
    {
        cout<<"\n underflow";
    }
    else
    {
      top=top--;
    }
}
void show()
{
    for(i=top;i>0;i--)
    {
        cout<<s[i]<<endl;
    }
}