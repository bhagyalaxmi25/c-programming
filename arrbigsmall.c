#include<stdio.h>
void main()
{
	int a[10],i,n,big,small;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	printf("Big element is :%d \n",big);
	printf("Small element is :%d \n",small);
}
