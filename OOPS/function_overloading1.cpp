#include<iostream>
using namespace std;
class test
{
    public:
    char output(string a)
    {
        cout<<"name:"<<a<<endl;
    }
    int output(int r)
    {
        cout<<"roll no."<<r<<endl;
    }
    double output(double b)
    {
        cout<<"age"<<b;
    }
};
int main()
{
   
    test vk;
    vk.output("vishal"); 
    vk.output("2102663"); 
    vk.output("19"); 
    return 0;
}