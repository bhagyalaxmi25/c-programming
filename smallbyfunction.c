#include<stdio.h>
void small(int a,int b)
{
	if(a<b)
	{
		printf("%d is small",a);
	}
	else
	{
		printf("%d is small",b);
	}
}
void main()
{
	int a,b;
	printf("Enter the 2 number :");
	scanf("%d%d",&a,&b);
	small(a,b);
}
	

