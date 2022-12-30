#include<iostream>
using namespace std;
class rec
{
    int h,w;
    public:
    rec(int x,int y)
    {
        h=x;
        w=y;
    }
    int area()
    {
        return(h*w);
    }};
int main()
{
    int c;
    rec vk(10,15);
    c=vk.area();
    cout<<"area ="<<c;
    return 0;
}