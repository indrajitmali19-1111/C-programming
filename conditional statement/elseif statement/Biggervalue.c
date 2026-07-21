#include<stdio.h>
int main()
{
	int a , b, c;
	printf("Enter A Three Numbers:");
	scanf("\n%d \n%d \n%d",&a,&b,&c);
	
	if(a>=b && a>=c){
		printf("%d  This Is Bigger Value",a);
		
		
	}
	
	else if(b>=a && b>=c){
		printf("%d This is Bigger Value", b);
	}
	
	else{
		printf("%d  This Is Bigger Value", c);
		}
	
}
