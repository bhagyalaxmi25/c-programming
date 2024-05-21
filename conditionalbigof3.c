#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("Enter the 3 number :\n");
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf("Biggest number is %d",big);
	return 0;
}
