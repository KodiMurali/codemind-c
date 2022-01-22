#include<stdio.h>
int main()
{
    int i,n,x[n],y[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d
",x[i]+y[i]);
    }
    return 0;
}