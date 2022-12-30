#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,p,v;
cout<<"enter no.of element";
cin>>n;
cout<<"\n enter elements";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\n enter the position where u want to delete an element:";
cin>>p;
cout<<"enter the value u want to delete:";
cin>>v;
for(i=n-1;i<p-1;i--)
a[i+1]=a[i];
a[p-1]=v;
for(i=0;i<n;i++)
cout<<"\t"<<a[i];
return 0;
}