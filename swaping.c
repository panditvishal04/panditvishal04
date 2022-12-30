#include<stdio.h>
#include<conio.h>
void main()
{
    int first,second,third;
    printf("enter the first value");
    scanf("%d",&first);
    printf("enter the second value");
    scanf("%d",&second);
    third=first;
    first=second;
    second=third;
    printf("after swapping first number is:\n%d",first);
    printf("after swapping second number is:\n%d",second);
    getch();
    }
