#include<stdio.h>
void main()
{
	int amt,hun,fif,ten;
	printf("Enter the amount :");
	scanf("%d",&amt);
	hun=amt/100;
	amt=hun%100;
	fif=amt/50;
	amt=fif%50;
	ten=amt/10;
	printf("Rs.100 note %d, Rs.50 notes %d, Rs.10 notes %d",hun,fif,ten);
}
