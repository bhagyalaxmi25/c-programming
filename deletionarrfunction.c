#include<stdio.h>
void del(int a[] , int n)
{
	int p,i;
	printf("Enter the position :");
	scanf("%d",&p);
	for(i=p-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("Elements of array :");
	for(i=0;i<n-1;i++)
	{
		printf("%d \t",a[i]);
	}
}
int main()
{
	int arr[10],size,i;
	printf("Enter the size of array :");
	scanf("%d",&size);
	printf("Enter the value of array :");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	del(arr,size);
	return 0;
}
