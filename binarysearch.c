#include<stdio.h>
#include<conio.h>
int binarysearch(int a[],int beg,int end, int val)
{
    int mid;
    if(end>=beg)
    {
        mid=(beg+end)/2;
    }
    if(a[mid]==val)
    {
        return mid+1;
    }
    else if(a[mid]<val)
    {
        return binarysearch(a,mid+1,end,val);
    }
    else
    {
        return binarysearch(a,beg,mid-1,val);    
    }
    return -1;
}
int main()
{
    int a[]={11,34,74,24,22,56,25,78,100};
    int val=24;
    int n=sizeof(a)/sizeof(a[0]);
    int res=binarysearch(a,0,n-1,val);
    printf("the elements of the array are:");
    for(int i=0;i<n;i++)
    printf("%d",&a[i]);
    printf("\nelement to be searched is:%d",val);
    if(res==-1)
    {
    printf("\nelememt is not present in array");
    }
    else
    {
        printf("\nelement is present at %d position of array",res);
    }
    return 0;
}