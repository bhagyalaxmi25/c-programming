#include<stdio.h>
int main()
{
	int a[10],n,i,p,newnum;
	printf("Enter the size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element :");
		scanf("%d",&a[i]);
	}
	printf("Enter the position :");
	scanf("%d",&p);
	printf("Enter the new element :");
	scanf("%d",&newnum);
	for(i=n;i>p-1;i--)
	{
		a[i]=a[i+1];
	}
	a[p]=newnum;
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
	return 0;
}
