#include <stdio.h>
#include <math.h>
 
int main()
{
    int num;
    int u;
    float v;
    scanf("%d",&num);
  
    v=sqrt((double)num);
    u=v;
 
    if(u==v)
        printf("True");
    else
        printf("False");
      
    return 0;
}