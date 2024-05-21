#include<stdio.h>
int main()
{
	int n,digit;
	printf("Enter the number");
	scanf("%d",&n);
	digit=0<n<9;
	printf("%d is digit",digit);
	return 0;
}
