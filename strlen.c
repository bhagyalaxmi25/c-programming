#include<stdio.h>
#include<string.h>
void main()
{
	int len=0;
	char name[20];
	printf("Enter the name :");
	gets(name);
	len=strlen(name);
	//while(name[len]='\0')
//	{
//		len++;
//	}
	printf("The length of string %d",len);
}
