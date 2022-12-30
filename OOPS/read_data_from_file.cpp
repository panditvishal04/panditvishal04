#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream vk;   
    vk.open("pandit.txt",ios::in);
    if(!vk)
    {
        cout<<"file doesn't exia=st";
    } 
    else
    {
        char x;
        while(1)
        {
            vk>>x;
            if(vk.eof())
            
                break;
                cout<<x;
        }
    }
    vk.close();
    return 0;
}