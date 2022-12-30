#include<stdio.h>
#include<conio.h>
void main()
{
    float f,c;
    printf("enter the value in fahrenheit");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("celcius=%f",c);
    getch();
}