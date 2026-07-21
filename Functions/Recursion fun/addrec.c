#include<stdio.h>

int add(int n){
	if(n>0){
	
		return n+add(n-1);
		
	}
	else{
		return 1;
	}
}

int main(){
	int n;
	printf("Enter positive integer:");
	scanf("%d",&n);
	printf("the Fatorial Of %d=%d",n,add(n));
	}

