#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the sides :\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("Triangle is valid");
	}
	else
	{
		printf("Triangle is not valid");
	}
	return 0;
}
