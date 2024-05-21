#include<stdio.h>
void main()
{
	int a[10],i,n,p;
	printf("Enter the size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element :");
		scanf("%d",&a[i]);
	}
	printf("Enter the position :");
	scanf("%d",&p);
	for(i=p-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d \t",a[i]);
	}
}
