#include<stdio.h>
float p,r,t,tot;
int simple(){
	p=20;
	r=30;
	t=11;
	tot=(p*r*t)/100;
	
}

int main(){
	printf("Simple interest:%f",simple(tot));
}
