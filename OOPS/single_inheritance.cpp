#include<iostream>
using namespace std;
class shape
{
    protected:
    int height,width;
    public:
    void set(int x,int y)
    {
        height=x;
        width=y;
    }
};
class rectangle:public shape
{
    public:
    int area()
    {
        return(height*width);
    }
};
int main()
{
    int a,b;
   rectangle vk;
   cout<<"enter the height=";
   cin>>a;
   cout<<"enter the width=";
   cin>>b;
   vk.set(a,b);
   cout<<"area is="<<vk.area();    
    return 0;
}