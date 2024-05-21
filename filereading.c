#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	int ch;
	fptr=fopen("Data .txt","r");
	if(fptr==NULL)
	{
		printf("File does not exist .\n");
		exit(0);
	}
	else
	{
		printf("\n File contains.\n");
		ch=fgetc(fptr);
		while(ch!=EOF)
		{
			printf("%c",ch);
			ch=fgetc(fptr);
		}
	}
	fclose(fptr);
}
