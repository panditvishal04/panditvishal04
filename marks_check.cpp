#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the marks:";
    cin>>a;
    if(a>90)
    {
        cout<<"excellent";
    }  
    else
    {
        if(a>80 & a<=90)
        {
        cout<<"good";
        }
        else
        {
           if(a>70 & a<=80)
           {
            cout<<"fair";
           }
           else
           {
             if(a>60 & a<=70)
             {
                cout<<"meet expectation";
             }
             else
             {
                cout<<"below per";
             }
           }
        }
    }
return 0;
}