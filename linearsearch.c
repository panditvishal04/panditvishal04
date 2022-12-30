#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,x,n;
    printf("how many elements");
    scanf("%d",&n);
    printf("enter array elements:n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter element to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            break;
        }
    }
    if(i<n)
    {
        printf("element found at index %d",i);
    }
    else
    {
        printf("element not found");
    }
    return 0;
}