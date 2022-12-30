#include<iostream>
using namespace std;
char s[100];
int top=-1;
int push(char x)
{
    s[top+1]=x;
    return x;
}
char pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
       return s[top--];
    }
}
int priority(char x)
{
    if(x=='(')
    {
        return 0;
    }
    if(x=='+'||x=='-')
    {
        return 1;
    }
    if(x=='*'||x=='/')
    {
        return 2;
    }
    if(x=='^')
    {
      return 3;
    }
    return 0;
}
int main()
{
    char ex[100];
    char *e,x;
    cout<<"enter expression:";
    cin>>x;
    e=ex;
    while(*e='\0')
     {
        if(isalnum(*e))
        {
            cout<<*e;
        }
        else if(*e=='(')
        {
            push(*e);
        }
        else if(*e==')')
        {
          while((priority(s[top]))>=priority(*e))
          cout<<pop();
          push(*e);
        }
        e++;
     }
     while(top!=-1)
     {
        cout<<pop();
     }
    return 0;
}