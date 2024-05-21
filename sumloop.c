#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the number of terms :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
    }
		printf("The sum of series upto %d terms is %d \n",n,sum);
	
}
