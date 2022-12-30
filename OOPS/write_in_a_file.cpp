#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream vk;
    vk.open("pandit.txt",ios::out);
    if(!vk)
    {
        cout<<"error while creating a file:";
    }
    else
    {
        cout<<"file created:";
        vk<<"hello world";
        vk.close();
    }
    return 0;
}