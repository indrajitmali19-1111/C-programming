#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number:");
	scanf("%d",&num);
	 if(num>0){
	 	printf("The number is positive");
	 	
	 }
	 else if(num<0){
	 	printf("The number is Negative");
	 	
	 }
	 else{
	 	printf("The Number is Zero");
	 }
}
