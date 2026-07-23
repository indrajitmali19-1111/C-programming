#include<stdio.h>
int swap(int a,int b){
	int temp;
	printf("Before swapping:%d",a);
	printf("\nBefore swapping:%d",b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n\nAfter swapping:%d",a);
	printf("\nAfter swapping:%d",b);
	
}

int main(){
	swap(11,7);
}
