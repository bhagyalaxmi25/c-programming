#include<stdio.h>
void main()
{
	int num[10],size,i;
	printf("Enter the size of array :");
	scanf("%d",&size);
	printf("Enter the element of data :");
	for(i=0;i<size;i++)
	scanf("%d",&num[i]);
	for(i=0;i<size;i++)
	printf("num[%d]=%d\n",i,num[i]);
}
