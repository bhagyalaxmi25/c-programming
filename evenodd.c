#include<stdio.h>
int main()
{
	int num[10],i,even=0,odd=0;
	printf("Enter 10 element data : \n");
	scanf("%d",&num[i]);
	for(i=0;i<10;i++)
	{
		if(num[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("Total even number=%d",even);
	printf("Total odd number=%d",odd);
	return 0;
}
