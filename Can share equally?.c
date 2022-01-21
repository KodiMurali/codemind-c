#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=(1*x)+(2*y);
    if(x==0 && y%2==0)
    {
        printf("YES");
    }
    else if(x==0 && y%2!=0)
    {
        printf("NO");
    }
     else if(z%2==0)
     {
         printf("YES");
     }
     else 
     {
         printf("NO");
     }
     return 0;
}