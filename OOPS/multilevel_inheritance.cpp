#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"hello world";
    }
};
class B:public A
{

};
class C:public A
{

};

int main()
{
   C vk;
   vk.display(); 
    return 0;
}