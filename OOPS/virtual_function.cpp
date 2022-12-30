#include<iostream>
using namespace std;
class A
{
    public:
   virtual void display()=0;
};
class B:public A
{
    public:
    void display()
    {
        cout<<"\n THIS IS CLASS B";
    }
};
class C:public B
{
    public:
    void display()
    {
        cout<<"\nTHIS IS CLASS C";
    }
};
int main()
{
    A *ptr;
   B vk;
   C vkp;
   ptr=&vk;
   ptr->display(); 
   ptr=&vkp;
   ptr->display();
    return 0;
}