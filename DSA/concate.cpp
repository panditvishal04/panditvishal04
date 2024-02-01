#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[20],b[20];
    string c;
    cout<<"enter the name:";
    cin>>a;
    cout<<"enter the name:";
    cin>>b;
   c= strcat(a,b);
   cout<<"after....:"<<c;
    return 0;
}