#include<stdio.h>

int fact(n){
	
	if(n>1){
		return n*fact(n-1);
	}
	else{
		return 1;
	}
}

int main(){
	
	int n;
	printf("Enter Positive Number:");
	scanf("%d",&n);
	printf("The Factorial Of %d=%d",n,fact(n));
}
