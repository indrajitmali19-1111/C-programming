#include<stdio.h>

int main(){
	int Mr=0611;
	int Ind=1111;
	
	int empty;
	
	empty=Mr;
	Mr=Ind;
	Ind=empty;
	
	printf("Mr=%d and Ind=%d",Mr,Ind);
}
