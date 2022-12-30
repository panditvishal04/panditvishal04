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
class cost
{
    public:
    int pcost(int c)
    {
        return(c*100);
    }
};
class rectangle:public shape,public cost
{
    public:
    int area()
    {
        return(height*width);
    }
};
class triangle:public shape,public cost
{
    public:
    int area()
    {
        return((height*width)/2);
    }
};
int main()
{
    int a,b,c;
    rectangle vk;
    triangle vkp;
    cout<<"enter the height=";
    cin>>a;
    cout<<"enter the widtgh=";
    cin>>b;
    cout<<"enter the value of cost";
    cin>>c;
    vk.set(a,b);
    vkp.set(a,b);
    cout<<"the area of rectangle is="<<vk.area()<<endl;
    cout<<"the cost of shape is="<<vk.pcost(c)<<endl;
    cout<<"the area of triangle is="<<vkp.area();
    return 0;
}