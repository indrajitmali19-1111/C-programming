//Example of Call By Value
#include<stdio.h>
int update(int n){
	printf("\n Before Updation N=%d",n);
	n=n+1;
	printf("\n After Updation N=%d",n);
}

int main(){
	int n=10;
	printf("Before Function call N=%d",n);//10
	update(n);//actual parameter copy of n
	printf("\n After Function call N=%d",n);//10
	//After function call print the n and n not change because
	//they operation in function is only valid in function block
	//they does not change in this main function
}
