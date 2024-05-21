#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	int ch;
	fptr=fopen("Data .txt","w");
	if(fptr==NULL)
	{
		printf("File does not exist .\n");
		exit(0);
	}
	else
	{
		printf("\n Enter Text.\n");
		while(ch!=EOF)
		{
			ch=getchar();
			fputc(ch,fptr);
		}
	}
	fclose(fptr);
}
