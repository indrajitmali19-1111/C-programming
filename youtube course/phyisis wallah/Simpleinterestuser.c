#include<stdio.h>
int main()
{
	float r,p,t,tot;
	printf("Enter Rate:");
	scanf("%f",&r);
	printf("\nEnter Principle:");
	scanf("%f",&p);
	printf("\nEnter Time:");
	scanf("%f",&t);
	
	tot=(r*p*t)/100;
	
	printf("\nYour simple interest:%f",tot);
	return 0;
}
