#include<stdio.h>
#include<conio.h>
void main()
{
    float principle,rate,time,simple_interest;
    printf("enter the principle");
    scanf("%f",&principle);
    printf("enter the rate");
    scanf("%f",&rate);
    printf("enter the time");
    scanf("%f",&time);
    simple_interest=(principle*rate*time)/100;
    printf("simple_interest=%f",simple_interest);
    getch();
}