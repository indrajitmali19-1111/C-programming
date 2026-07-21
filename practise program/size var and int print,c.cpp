//Size of intger data type and size of variable
#include<stdio.h>
int add(int a){
	printf("\n Square is : %d",a*a);
	printf("\n Size of int : %d",sizeof(int));
	printf("\n Size of variable : %d",sizeof(a));
	
	return 0;
}

int main(){
	int a=10;
	add(a);
	
}
