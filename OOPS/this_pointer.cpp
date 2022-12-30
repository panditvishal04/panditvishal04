#include<iostream>
using namespace std;
class vishal
{
    int nums;
    public:
    void get(int num)
    {
        this->nums=num;
    }
    void print()
    {
        cout<<"\n value="<<nums;
    }};
int main()
{
    vishal vkp;
    int num;
    cout<<"enter any number=";
    cin>>num;
    vkp.get(num);
    vkp.print();
    return 0;
}