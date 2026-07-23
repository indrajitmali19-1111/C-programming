#include<stdio.h>
int swap(int *i,int *m){
	int temp;
	temp=*i;
	*i=*m;
	*m=temp;
	
	printf("\n\nAfter swap calling i:%d",*i);
	printf("\nAfter swap calling m:%d",*m);
	
}

int main(){
	int mr=7,in=11;
	
	printf("Before swap calling mr:%d",mr);
	printf("\nBefore swap calling in:%d",in);
	
	swap(&mr,&in);
	
	printf("\n\nAfter swap calling mr:%d",mr);
	printf("\nAfter swap calling in:%d",in);
	
}
