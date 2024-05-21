#include<stdio.h>
#include<conio.h>
void add(void);
void main()
{
	add();
	getch();
}
void add()
{
	int num1,num2,sum=0;
	printf("Enter two number. \n");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Result=%d",sum);
}
