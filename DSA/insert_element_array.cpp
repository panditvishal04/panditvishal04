#include<iostream>
using namespace std;

int main()
{
    int a[20],i,n,p,v; 
    cout<<"enter the no. of elements";
    cin>>n;
    cout<<"\nenter elments";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nenter the position where you want to insert an element=";
    cin>>p;
    cout<<"\nenter the value you want to insert =";
    cin>>v;
    for(i=n-1;i>=p-i;i--)
    {
        a[i+1]=a[i];
    }
    a[p]=v;
    cout<<"\n new array list =";
    for(i=0;i<=n;i++)
    {
        cout<<"\t"<<a[i];
    }
    return 0;
}