#include<stdio.h>
int main()
{
	int a,i=1,b;
	scanf("%d %d",&a,&b);
	while(i<=b)
	{
		printf("%d x %d = %d
",a,i,a*i);
		i=i+2;
	}
	return 0;
	}