#include<stdio.h>
int main()
{
    int Year;
    scanf("%d",&Year);
    if(Year%400==0)
    {
        printf("True");
    }
    else if(Year%100==0)
    {
        printf("False");
    }
    else if(Year%4==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}