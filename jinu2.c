#include<stdio.h>
int main()
{
	int n1,n2,big;
	printf("Enter two number :");
	scanf("%d %d",&n1,&n2);
	big=(n1>n2)?n1:n2;
	while(1)
	{
		if((big%n1==0) && (big%n2==0))
		{
		printf("LCM of %d and %d is %d",n1,n2,big);
		break;
    	}
	}
	big++;
	return 0;
}