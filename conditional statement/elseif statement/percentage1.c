#include<stdio.h>
int main()
{
	int ps;
	printf("Enter your Percentage:");
	scanf("%d",&ps);
	
	if(ps>=90){
		printf("Grade A+");
		
	}
	else if(ps>=75){
		printf("Grade B+");
	
	}
	else if(ps>=60){
		printf("Grade C+");
		
	}
	else if(ps>=35){
		printf("Grade D+");
	}
	
	else{
		printf("Grade F");
	}
}
