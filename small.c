#include<stdio.h>
int main()
{
	int a,b,c,small;
	printf("Enter the number :");
	scanf("%d%d%d",&a,&b,&c);
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
	return 0;
}
