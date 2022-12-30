#include<iostream>
using namespace std;
int main()
{
    int a, b,swap;
    cout << "a =";
    cin >> a;
    cout << "b =";
    cin >> b;
    a=b;
    b=a;
    cout<<"after swapping first is:"<<a;
    cout<<"after swapping second is:"<<b;
    return 0;
}