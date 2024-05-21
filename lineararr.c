#include<stdio.h>
int main()
{
	int arr[10],i,n,key,x=0;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the element :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key element :");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("%d is present at %d position \n",key,i+1);
			x=1;
		}
	}
	if(x==0)
	{
		printf("%d is not present",key);
	}
	return 0;
}
