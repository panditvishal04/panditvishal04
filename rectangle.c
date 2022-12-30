#include<stdio.h>
#include<conio.h>
void main()
{
 int l,b,a,c;
 printf("enter the length");
 scanf("%d",&l);
 printf("enter the breadth");
 scanf("%d",&b);
 a=l*b;
 printf("area of rectangle=%d",a);
c=2*(l+b);
printf("perimeter of rectangle=%d",c);
getch();
}