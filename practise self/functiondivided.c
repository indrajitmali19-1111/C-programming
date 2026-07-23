#include<stdio.h>
#include<errno.h>
int div(int i,int m){
	return i/m;
}

int main(){
	int  divi;
	divi=div(1111,11);
	printf("The division is:%d",divi);
}
