#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Four Number: ");
	scanf("%d  %d  %d  %d", &a , &b , &c , &d);
	
	if(a>=b&&a>=c&&a>=d){
		printf("%d Is The greatest number ",a);
		
	}
	else if(b>=a&&b>=c&&b>=d){
		printf("%d Is the Greatest number",b);
		
	}
	else if(c>=a&&c>=b&&c>=d){
		printf("%d Is the Greatest number",c);
		
	}
	else{
		printf("%d  D Is the number is Greatest",d);
	}
}
