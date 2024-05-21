#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char str[20],str1[30];
	printf("Enter a string :\n");
	gets(str);
	while(str[i]!='\0')
	{
		str1[i]=str[i++];
		printf("%c",str1[i]);
	}
	//str1[i]='\0';
	//printf("\0 output string is :%s",str1);
	//getch();
}
