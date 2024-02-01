#include<iostream>
using namespace std;
void knapsack(int n,float weight[],float profit[],float capacity)
{
    float x[20],fp=0;
    int i,j,u;
    u=capacity;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
        {
            break;
        }
        esle:
        {
            x[i]=1.0;
            fp=fp+profit[i];
            u=u-weight[i];
        }
    }
    if(i<n)
    x[i]=u/weight[i];
    fp=fp+(x[i]*profit[i]);
    cout<<"the result vector is:";
    for(i=0;i<n;i++)
    {
        cout<<x[i];
    }
    cout<<"\nmaximum profit is:"<<fp;
}
int main()
{
    float weight[20],profit[20],capacity;
    int num,i,j;
    float ratio[20],temp;
    cout<<"\nenter the number of object:";
    cin>>num;
    cout<<"\nenter the weight and profit of each object:";
    for(i=0;i<num;i++)
    {
       cin>>weight[i]>>profit[i];
    }
    cout<<"\n enter the capacity of knapsack:";
    cin>>capacity;
    for(i=0;i<num;i++)
    {
        ratio[i]=profit[i]/weight[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=1;j<num;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;
                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;
                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;
            }
        }
    }
    knapsack(num,weight,profit,capacity);
    return 0;
}
