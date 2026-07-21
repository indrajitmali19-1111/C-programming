#include<stdio.h>

int fact(int n){                   //facc(3)

	if(n>1){                           //3>1 true 2>1 true 1>1false

	return n*fact(n-1);          //3*fact(3-1)
                                       //=3*2
	}                                //3*(2-1)
	                                  //=3*2*1=6
	else{
	return 1;
	
	
	}
}
	int main(){
	int n;
	printf("Enter positive integer:");
	scanf("%d",&n);
	printf("the Fatorial Of %d=%d",n,fact(n));
	}

