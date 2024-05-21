#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter 4 numbers\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{if(a>d)
		printf("%d is biggest",a);
		else
		printf("%d is biggest",d);
		}
		else
		{
		if(c>d)
		printf("%d is biggest",c);
		else
		printf("%d is biggest",d);   
    	}
    }
    else
    {
    	if(b>c)
    	{
    		if(b>d)
    		printf("%d is biggest",b);
    		else
    		printf("%d is biggest",d);
		}
		else
		{
			if(c>d)
			printf("%d is biggest",c);
			else
			printf("%d is biggest",d);
			
		}
	}
}
    
