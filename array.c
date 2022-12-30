#include <stdio.h>
void main()
{
    int i,j,m,n;
    printf("enter the no. of rows:");
    scanf("%d",&m);
    printf("enter the no. of coloumns:");
    scanf("%d",&n);
    int a[m][n];
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter the element value:");
            scanf("%d",&a[i][j]);

        }
    }
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++);
        {
            printf("(%d,%d) = %d \n",i,j,a[i][j]);
        }
    }
}