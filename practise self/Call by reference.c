//call by reference
#include<stdio.h>
int update(int *n){
	printf("\n Before Updation N=%d",*n);//n=10
	*n=*n+1;
	printf("\n After Updation N=%d",*n);//n=11
}

int main(){
	int n=10;
	printf("Before Function call N=%d",n);//10
	update(&n);//actual parameter copy of n
	printf("\n After Function call N=%d",n);//11
	//ufter function calling the value of n change because
	//fuction calling time call the memory address off n
	//this reason to change the n after callin function
	//and operation perform in function block
}
