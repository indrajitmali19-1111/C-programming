#include<stdio.h>
int main()
{
	int unit;
	float bills;
	printf("Enter Electricity Bill Consume:");
	scanf("%f",&unit);
	
	if(unit<=100){
		bills=unit*1.5;
		
	}
	
	else if(unit<=200){
	bills=unit*2.5;
		
	}
	
	else{
		bills=unit*4.0;
		}
		
	printf("Electricity Bill = Rs. %.2f",bills);
}
