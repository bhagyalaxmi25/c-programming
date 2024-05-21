#include<stdio.h>
void main()
{
    int a[10][10],r[10],c[10];
    int i,j,row,col;
	printf("\n Enter no of rows and coloms : \n");
	scanf("%d%d",&row,&col);
	printf("Enter element of a Matrix....\n");
	for(i=0;i<row;i++)
	  for(j=0;j<col;j++)
	  scanf("%d",&a[i][j]);
	  printf("Given Matrix is....\n");
	  for(i=0;i<row;i++)
	  {
	  	printf("\n");
	  	for(j=0;j<col;j++)
	  	printf("%d",a[i][j]);
	  }
	  for(i=0;i<row;i++)
	  {
	  	r[i]=0;
	  	for(j=0;j<col;j++)
	  	r[i]+=a[i][j];
	  }
	  for(j=0;j<col;j++)
	  {
	  	c[j]=0;
	  	for(i=0;i<row;i++)
	  	c[j]+=a[i][j];
	  }
	  for(i=0;i<row;i++)
	  printf("\n sum of row : %d is : %d \n",i+1,r[i]);
	  for(j=0;j<col;j++)
	  printf("\n sum of colom : %d is : %d \n",j+1,c[j]);	
}    
