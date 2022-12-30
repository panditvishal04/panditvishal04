#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    double r1,r2;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    d=b*b-4*a*c;
    printf("discriminant :%d\n",d);
    if(d>=0)
    {
     r1=(-b+sqrt(d))/(2*a);
     r2=(-b-sqrt(d))/(2*a);
    printf("value of root:%f %f\n",r1,r2);
    }
    else if(d=0)
    {
      r1,r2=-b/2*a;
     printf("value of root:%f %f\n",r1,r2);
    }
    else
    {
        printf("roots are imaginary\n");
    }
 getch();
}