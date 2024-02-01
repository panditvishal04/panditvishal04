#include<iostream>
using namespace std;

int main(){
    int a,b,ch;
    cout<<"enter the any number:";
    cin>>a;
    cout<<"\nenter the any number:";
    cin>>b;
    cout<<"\n1. addition:";
    cout<<"\n2. subtraction:";
    cout<<"\n3. multiplication:";
    cout<<"\n4. division:";
    cout<<"\nenter your choice:";
    cin>>ch;
    switch(ch)
    {
    case 1: cout<<"the addition of two number is:"<<a+b;
           cin>>a>>b;
           break;
    case 2: cout<<"the subtraction of two number is:"<<a-b;
           cin>>a>>b;
           break;
    case 3: cout<<"the multiplication of two number is:"<<a*b;
           cin>>a>>b;
           break;
    case 4: cout<<"the divition of two number is:"<<a/b;
           cin>>a>>b;
           break;
    default:
    cout<<"\n plz enter valid choice";
    break;
    }
    return 0;
}