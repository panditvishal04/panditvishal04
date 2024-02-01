#include<iostream>
using namespace std;




int max (int a ,int b)
{
    return (a>b)? a:b;
}
int knapsack (int W , int wt[], int val[], int n)
{
if (n==0 || W==0)
{
 return 0;
}
else if (wt [n-1]>W)
{
return knapsack(W , wt , val ,n-1); 
}
else
{
return max(val[n-1]+knapsack(W-wt[n-1],wt,val, n-1), knapsack (W , wt, val, n-1));
}
}
int main()
{
int val[] = {3 ,4, 5,6};
int wt [] = {2 ,3, 4,5};
int W = 5; int n =4;
cout<< "maximum value we can put in knapsack is "<<knapsack (W , wt,val,n); 
return 0;
}
