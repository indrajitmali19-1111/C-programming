#include<stdio.h>
int fact(int n);

int fact(int n){
	if(n>=1){
		return n*fact(n-1);
		
	}
	else{
		return 1;
	}
}



int main(){
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	
	printf("The Factorial of %d=%d",n,fact(n));
	fact(n);
	
}
