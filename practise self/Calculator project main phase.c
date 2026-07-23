#include<stdio.h>
int add(int a,int b){
	int c=a+b;	
}

int sub(int a, int b){
	int c=a-b;	
}

int mul(int a , int  b){
	int c=a*b;
}

int div(int a,int b){
	int c=a/b;
}

int main(){
	int a,b,c;
	int choice;
	while(1){
		printf("---CHOOSE OPERATION---\n");
		printf("----------------------\n");
		printf("\n\n");
		printf("1.ADDITION\n");
		printf("2.SUBSTRACTION:\n");
		printf("3.MULTIPLICATION\n");
		printf("4.DIVISION\n");
		printf("5.EXIT\n");
		printf("11.SPECIAL GAME");
		
		printf("\nENTER CHOICE:");
		scanf("%d",&choice);
		
		if(choice<=4)
		{
		printf("\nEnter Element First:");
		scanf("%d",&a);
		printf("Enter Element Second:");
		scanf("%d",&b);
		}
		
		switch(choice){
			
			case 1:
				c=add(a,b);
				printf("\nADDITION IS:%d\n\n\n",c);
				break;
				
			case 2:
				c=sub(a,b);
				printf("\nSUBSTRACTION IS:%d\n\n\n",c);
				break;
				
			case 3:
				c=mul(a,b);
				printf("\nMULTIPLICATION IS:%d\n\n\n",c);
				break;
				
			case 4:
				c=div(a,b);
				printf("\nDIVISON IS:%d\n\n\n",c);
				break;
				
			case 11:
				printf("\n\n\nTHANK YOU FOR VISIT MY PROJECT\n\n\n");
				break;
				
			case 5:
				printf("\nEXIT THANK YOU\n\n\n");
				return 0;
				break;
				
			default:
				break;
						
		}
		
		
		
	}
	
	
	
}




