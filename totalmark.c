#include<stdio.h>
int main()
{
	int rollno,sum;
	char name[10];
	float mk1,mk2,avg;
	printf("Enter the rollno :");
	scanf("%d",&rollno);
	printf("Enter the name :");
	scanf("%s",&name);
	printf("Enter the two subject mark :");
	scanf("%f%f",&mk1,&mk2);
	sum=mk1+mk2;
	avg=(float)sum/2;
	printf("Rollno is %d \n",rollno);
	printf("Name is %s \n",name);
	printf("Total mark is %d \n",sum);
	return 0;
}
