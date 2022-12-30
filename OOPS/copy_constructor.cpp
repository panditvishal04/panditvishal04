#include<iostream>
using namespace std;
class test
{
    int x;
    public:
    test();
    test(int val)
    {
        x=val;
    }
    test(test&jn)
    {
        x=jn.x;
    }
    int show()
    {
        return x;
    }};
int main()
{
    int v,a,b;
    cout<<"enter any number:";
    cin>>v;
    test oldjn(v);
    test newjn(oldjn);
    a=oldjn.show();
    b=newjn.show();
    cout<<"\n original="<<a;
    cout<<"\n new= "<<b;
    return 0;
}