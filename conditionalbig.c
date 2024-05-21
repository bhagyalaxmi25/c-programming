#include<stdio.h>
int main()
{
	int a,b,big;
	printf("Enter the two number :\n");
	scanf("%d%d",&a,&b);
	big=a>b?a:b;
	printf("Biggest number is %d",big);
	return 0;
}
