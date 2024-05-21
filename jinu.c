#include<stdio.h>
void main()
{
    int amt,hun,fif,ten;
    printf("Enter the Amount");
    scanf("%d",&amt);
    hun=amt/100;
    amt=amt%100;
    fif=amt/50;
    amt=amt%50;
    ten=amt/10;
    printf("Rs.100 Note=%d Rs.50 Note %d Rs.10 Note %d",hun,fif,ten);

}