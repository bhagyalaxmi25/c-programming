#include<stdio.h>
void add(int,int);
void main()
{
	int num1,num2;
	printf("Enter two number \n");
	scanf("%d %d",&num1,&num2);
	add(num1,num2);
}
void add(int a,int b)
{
	int sum;
	sum=a+b;
	printf("Result=%d",sum);
}


