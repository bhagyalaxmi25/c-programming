#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string to replace (the) word :");
	gets(str);
	int i;
	for(i=0;str!='\0';i++)
	{
		if(str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e')
		{
			str[i]='w';
			str[i+1]='e';
			str[i+2]='l';
		}
	}
	printf("Str is : %s",str);
}
