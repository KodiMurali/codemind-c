#include<stdio.h>
int main()
{
    int arr[100],n,a,b,sum=0,sum1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        sum=sum+arr[i];
        else
        sum1=sum1+arr[i];
    }
    printf("%d",sum1);
}