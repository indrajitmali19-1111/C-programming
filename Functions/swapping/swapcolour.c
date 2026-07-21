#include<stdio.h>
int main(){
	int red=10;
	int green=20;
	
	int empty;
	
	empty=red;
	red=green;
	green=empty;
	
	printf("red=%d and Green=%d",red,green);
}
