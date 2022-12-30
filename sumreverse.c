#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,rev=0,d;
    printf("enter thr number");
    scanf("%d",&num);
    while(num)
    {
        d=num%10;
        num=num/10;
        sum=sum+d;
        rev=rev*10+d;
    }
     printf("sum of digit=%d",sum);
     printf("\nreverse of the number=%d",rev);
     getch();
}