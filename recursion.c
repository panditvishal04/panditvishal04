#include<stdio.h>
#include<conio.h>
int fibonacci(int);
void main()
{
    int n,f;
    printf("enter the value of n");
    scanf("%d",&n);
    f=fibonacci(n);
    printf("%d",f);
    getch();
}
int fibonacci(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}