#include<stdio.h>
void small(int a,int b,int c)
{
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is smallest",a);
		}
		else
		{
			printf("%d is smallest",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d is smallest",b);
		}
		else
		{
			printf("%d is smallest",c);
		}
	}
}
void main()
{
	int a,b,c;
	printf("Enter 3 number :");
	scanf("%d%d%d",&a,&b,&c);
	small(a,b,c);
}
