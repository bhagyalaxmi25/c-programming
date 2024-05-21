#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,k,r,c,mul[10][10];
	printf("Enter the number of rows and col size of 2 Array :");
	scanf("%d%d",&r,&c);
	printf("Enter the value of A matrix :");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	printf("Enter the value of B matrix :");
	for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
		scanf("%d",&b[i][j]);
	printf("Multiplication of two matrices are \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<r;k++)
			mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			printf("%d",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
