#include<stdio.h>
int main(){
    int n;
    printf("enter an integer:");
    scanf("%d",&n);
    printf("last digit is %d:",n%10);
    printf("first digit is :%d",n%1000);
    return 0;



}