#include<stdio.h>
int main(){
	int time=12;
	
	switch(time){
		case 6:
			printf("Its morning");
			break;
			
		case 12:
			printf("Its afternoon");
			break;
			
		case 5:
		printf("Its evening");
		break;
		
		default:
		printf("its night");		
	}
}
