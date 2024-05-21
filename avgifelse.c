#include<stdio.h>
int main()
{
	int avg;
	printf("Enter the avarage value :");
	scanf("%d",&avg);
	if(avg>=90 && avg<=100)
	   printf("O Grade");
	else if(avg>=80 && avg<90)
	   printf("E Grade");
	else if(avg>=70 && avg<80)
	   printf("A Grade");
	else if(avg>=60 && avg<70)
	   printf("B Grade");
	else if(avg>=50 && avg<60)
	   printf("C Grade");
	else if(avg>=35 && avg<50)
	   printf("D Grade");
	else
	   printf("F Grade");
	return 0;                     
}
