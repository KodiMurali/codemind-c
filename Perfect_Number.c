#include<stdio.h>
int main()
{
    int n,i,t=0,s=0;
    scanf("%d",&n);
    t=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(t==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}