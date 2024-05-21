#include<stdio.h>
int main()
{
	int arr[10][10],i,j,r,c;
	printf("Enter the number of row and column :\n");
	scanf("%d%d",&r,&c);
	printf("Enter the value of matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);	
		}
	}
	printf("Enter the element of matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",arr[i][j]);
	    }
	    printf("\n");
	}
	return 0;	
	
}
