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
class rectangle:public shape , public cost
{
    public:
    int area()
    {
        return(height*width);
    }
};
int main()
{
    int a,b,c;
   rectangle vk;
   cout<<"enter the height=";
   cin>>a;
   cout<<"enter the width=";
   cin>>b;
   cout<<"enter the value of cost";
   cin>>c;
   vk.set(a,b);
   cout<<"area is="<<vk.area()<<endl;
   cout<<"the cost is="<<vk.pcost(c);    
    return 0;
}