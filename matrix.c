#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],sum[10][10],r,c,i,j;
	printf("Enter the row and col size of 2 array \n");
	scanf("%d%d",&r,&c);
	printf("Enter the value of A matrix \n");
	for(i=0;i<r;i++)
	  for(j=0;j<c;j++)
	    scanf("%d",&a[i][j]);
	printf("Enter the value of B matrix \n");
	for(i=0;i<r;i++)
	  for(j=0;j<c;j++)
	    scanf("%d",&b[i][j]);
	printf("Addition of two matrices are \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d",sum[i][j]);
		}
		printf("\n");
	}	    
}
