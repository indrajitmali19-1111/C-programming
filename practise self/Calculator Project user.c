#include<stdio.h>
int add1(int a,int b){
	int c=a+b;
	return c;
}
int sub(int a, int b){
	int c=a-b;
	return c;
}

int mul(int a, int b){
	int c=a*b;
	return c;
}

int div(int a,int b){
	int c=a/b;
	return c;
}



int main(){
		int a,b,c;
	int choice;
	printf("Choose The operation: ");
	printf("\n1:Addition.");
	printf("\n2:Substraction.");
	printf("\n3:Multiplication.");
	printf("\n4:Division.");
	
	printf("\n\nEnter A Choise:");
	scanf("%d",&choice);
	
	
	
	
	if(choice==1){	
	printf("\nEnter First Element A:");//a
	scanf("%d",&a);
	printf("\nEnter Second Element B:");//b
	scanf("%d",&b);
	c=add1(a,b);
	printf("Addition is:%d",c);
	}
	
	else if(choice==2){	
	printf("\nEnter First Element A:");//a
	scanf("%d",&a);
	printf("\nEnter Second Element B:");//b
	scanf("%d",&b);
	c=sub(a,b);
	printf("Substraction is:%d",c);
	}
	
	else if(choice==3){	
	printf("\nEnter First Element A:");//a
	scanf("%d",&a);
	printf("\nEnter Second Element B:");//b
	scanf("%d",&b);
	c=mul(a,b);
	printf("Multiplication is:%d",c);
	}
	
	else if(choice==4){	
	printf("\nEnter First Element A:");//a
	scanf("%d",&a);
	printf("\nEnter Second Element B:");//b
	scanf("%d",&b);
	c=div(a,b);
	printf("Division is:%d",c);
	}
	

	
}
