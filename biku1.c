#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the x coordinate and y coordinate respectively:\n");
	scanf("%d%d",&x,&y);
	if(x==0)
	{
		if(y==0)
		printf("(%d,%d)point on origin",x,y);
		else
		printf("(%d,%d)point on y-axis",x,y);
	}
	else
	{
		if(y==0)
		printf("(%d,%d)point on x-axis",x,y);
		else
		printf("(%d,%d)point neither in any axis nor origin",x,y);
	}
	return 0;
}
