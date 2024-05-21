#include<stdio.h>
#include<conio.h>
void mul(void);
int main()
{
	mul();
	getch();
}
void mul()
{
	int a,b,mul;
	printf("Enter two number :\n");
	scanf("%d%d",&a,&b);
	mul=a*b;
	printf("Result=%d",mul);
}

