#include<stdio.h>
int main()
{
	int n,i,j,mark[6],total=0;
	char name[2];
	float avg;
	for(i=0;i<2;i++)
	{
		printf("Enter the name of students :");
	    scanf("%s",name);
		printf("Enter the mark of subject :\n");
		for(j=0;j<6;j++)
		{
			printf("Subject %d :",j+1);
			scanf("%d",&mark[j]);
			total=total+mark[j];
		}
		    printf("Total mark is : %d \n",total);
			avg=total/6;
		    printf("Avarage marks =%.2f \n",avg);
	}
	for(i=0;i<2;i++)
	{
	if(avg>=50)
	{
		printf("Result : pass \n");
	}
	else
	{
		printf("Result : fail \n");
	}
    }
	return 0;
}
