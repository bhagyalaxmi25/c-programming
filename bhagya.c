#include<stdio.h>
void main()
{
    int a,b,x;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    x=a>b?a:b;
    printf("Biggest of two no. %d",x);
}