#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"\n THIS IS CLASS A";
    }
};
class B
{
    public:
    A *ptr;
    void display()
    {
        ptr->display();
        cout<<"\n THIS IS CLASS B";
    }
};
int main()
{
   B vk;
   vk.display(); 
    return 0;
}