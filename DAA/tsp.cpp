#include<iostream>
using namespace std;
int matrix[25][25],visited_cities[10],limit,cost=0;
int tsp(int c)
{
    int count,nearest_city=999;
    int minimum=999,temp;
    for(count=0;count<limit;count++)
    {
        if(matrix[c][count]!=0 && visited_cities[count]==0)
        {
            if(matrix[c][count<minimum])
            {
                minimum=matrix[count][0]+matrix[c][count];
            }
            temp=matrix[c][count];
            nearest_city=count;
        }
    }
    if(minimum!=999)
    {
        cost=cost+temp;
    }
    return nearest_city;
}
void minimum_cost(int city)
{
    int nearest_city;
    visited_cities[city]=1;
    cout<<""<<city+1;
    nearest_city=tsp(city);
    if(nearest_city==999)
    {
        nearest_city=0;
        cout<<""<<nearest_city+1;
        cost=cost+matrix[city][nearest_city];
        return;
    }
    minimum_cost(nearest_city);
}
int main()
{
    int i,j;
    cout<<"enter total no. of cities:";
    cin>>limit;
    cout<<"\nenter cost matrix:";
    for(i=0;i<limit;i++)
    {
        cout<<"\nenter "<<limit<<" elements in row("<<i+1<<"):"<<endl;
        for(j=0;j<limit;j++)
        {
            cin>>matrix[i][j];
        }
        visited_cities[i]=0;
    }
    cout<<"\nentered cost matrix";
    for(i=0;i<limit;i++)
    {
        cout<<"\n";
        for(j=0;j<limit;j++)
        {
            cout<<"\t"<<matrix[i][j];
        }
    }
    cout<<"\nPath:";
    minimum_cost(0);
    cout<<"\nmimimum cost:"<<cost;
    return 0;
}