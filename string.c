#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[50];
	int count=0;
	printf("Enter the string :");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("No. of words : %d",count);
	return 0;
}
