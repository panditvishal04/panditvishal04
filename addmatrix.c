#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,c,d,first[10][10],second[10][10],sum[10][10];
    printf("enter the number of rows and columns of matrix\n");
    scanf("%d %d",&m,&n);
    printf("enetr the element of first matrix\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&first[c][d]);
        }
    }
    printf("enter the element of second matrix\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&second[c][d]);
        }
    }
    printf("sum of entered matrix:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            sum[c][d]=first[c][d]+second[c][d];
            printf("%d\t",sum[c][d]);
        }
    }
    printf("\n");
    getch();
    }