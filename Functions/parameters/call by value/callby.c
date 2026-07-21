#include<stdio.h>
 
 int display(int M,int I){
 	printf("\nBefore updation M=%d",M);
	printf("\n Before Function call I=%d",I);
	
	M=M+1;
	I=I+1;
	
	printf("\nAfter Upation M=%d",M);
	printf("\n After Updation I=%d",I);

 }
 
 
 
 
 
int main(){
	
	int a=6;
	int b=5;
	printf("Before Function call a=%d",a);
	printf("\n Before Function call b=%d",b);
	 display(a,b);
	 
	 printf("\nafter Function call a=%d",a);
	printf("\n after Function call b=%d",b);
	 
	 
}
