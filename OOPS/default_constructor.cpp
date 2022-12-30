#include<iostream>
using namespace std;
class rectangle
{
    int l,b;
    public:
    rectangle()
    {
        l=0;
        b=0;
    }
    int perimeter()
    {
        cout<<"enter length and breadth";
        cin>>l>>b;
        return(2*(l+b));
    }};
int main()
{
    int c;
    rectangle jn;
    c=jn.perimeter();
    cout<<"perimeter= "<<c;
    return 0;
}