#include<stdio.h>
int main(){
	int r,c;
	for(r=0;r<5;r++){
		for(c=0;c<5;c++){
			if(r==1||r==3){
				printf("0");
							
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
	
}
