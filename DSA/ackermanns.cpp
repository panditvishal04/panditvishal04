#include<iostream>
using namespace std;
int ack(int m, int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(m>0&&n==0)
    {
        return ack(m-1,1);
    }
    else(m>0&&n>0);
    {
        return ack(m-1,ack(m,n-1));
    }
    return 0;
}
int main()
{ 
    int m,n;
    cout<<"enter the value of m";
    cin>>m;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"answer is ="<<ack(m,n);
    return 0;
}