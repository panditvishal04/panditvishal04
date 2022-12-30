#include<iostream>
using namespace std;
int main()
{
    int a[20],i,n,p,v;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"\nenter the element:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nenter the position where you want to insert an element=";
    cin>>p;
    cout<<"\nenter the value you want to insert=";
    cin>>v;
    for(i=n-1;i>=p-1;i--)
    {
        a[i+1]=a[i];
        a[p-1]=v;
    }
    cout<<"\n new array list=";
    for(i=0;i<=n;i++)
    {
    cout<<"\t"<<a[i];
    }
    return 0;
}