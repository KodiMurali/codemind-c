#include<stdio.h>
int main()
{
    int n,a[100][100],b[100][1000],c[100][100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            if(c[i][j]<0)
            {
                c[i][j]=c[i][j]*-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("%d
",c[i][j]);
        
    }
}