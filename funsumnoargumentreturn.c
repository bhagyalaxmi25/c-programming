#include<stdio.h>
#include<conio.h>
int add(void);
void main()
{
	int result;
	result=add();
	printf("Result=%d",result);
}
int add(void)
{
	int num1,num2,sum=0;
	printf("Enter Two Number \n");
	scanf("%d %d",&num1,&num2);
	sum=num1+num2;
	return sum;
}
