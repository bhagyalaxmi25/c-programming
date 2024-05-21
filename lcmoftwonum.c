#include<stdio.h>
int main()
{
	int n1,n2,m1,m2,i,j;
	printf("Enter two number :");
	scanf("%d %d",&n1,&n2);
	m1=n1;
	m2=n2;
	while(m1!=m2)
	{
		m1=n1*1;
		m2=n2*1;
		if(m1>m2)
		{
			j++;
		}
		if(m1<m2)
		{
			i++;
		}
	}
	printf("The LCM of %d and %d is %d",n1,n2,m1);
	return 0;
}
