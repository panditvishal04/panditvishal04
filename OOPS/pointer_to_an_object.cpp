#include<iostream>
using namespace std;
class vishal
{
    int a;
    public:
    vishal(int b)
    {
        a=b;
    }
    int get_val()
    {
        return a;
    }};
int main()
{
    vishal vp(200),*p;
    p=&vp;
    cout<<"value obtain= "<<p->get_val();
    return 0;
}