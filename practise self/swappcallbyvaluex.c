#include<stdio.h>
int call(int *a,int *b){
	int swap;
	swap=*a;
	*a=*b;
	*b=swap;
}

int main(){
	int c=11,d=10;
	call(&c,&d);
	printf("call by value C=%d\ncall by value d=%d",c,d);
}
