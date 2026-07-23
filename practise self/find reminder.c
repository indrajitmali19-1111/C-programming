#include<stdio.h>
int main(){
	int a,b,reminder;
	
	printf("Enter Divide:");
	scanf("%d",&a);
	
	printf("Enter Divisor:");
	scanf("%d",&b);
	
	reminder=a%b;
	
	
	printf("The Reminder Is:%d",reminder);
}
