#include<stdio.h>
int main()
{
	int arr[10][10],a[10][10],b[10][10],sum[10][10],i,j,r,c;
	printf("Enter the size of row and column : \n");
	scanf("%d%d",&r,&c);
	printf("Enter the element of A matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the element of B matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of two matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
