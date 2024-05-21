#include<stdio.h>
void main()
{
    int a,b,c,x;
    printf("Enter the value of A,B and C");
    scanf("%d%d%d",&a,&b,&c);
    x=a>b?(a>c?a:c):(b>c?b:c);
    printf("Biggest of three no. %d",x);
}