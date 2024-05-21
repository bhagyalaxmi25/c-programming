#include<stdio.h>
int main()
{
	float c,fh;
	printf("Enter Temperature in centigrade :\n");
	scanf("%.2f",&c);
	fh=(c*9/5)/32;
	printf("Temperature in fharenhite is %f :\n",fh);
	return 0;
}
