#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float area,s;
    scanf("%d %d %d",&a,&b,&c);
    s=(float)(a+b+c)/2;
    area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);
    
    return 0;
}