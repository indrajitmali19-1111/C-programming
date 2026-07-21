//#include<stdio.h>
//int main(){
//	int r,c,s;
//	char ai='a';
//	
//	for(r=0;r<5;r++){
//		
//		for(c=0;c<=r;c++){
//			printf("%c",ai);
//			ai++;
//		}
//		printf("\n");
//	}
//}


#include<stdio.h>
int main()
{
	int r,c,s;
	
	for(r=0;r<5;r++){
		for(s=0;s<2*(5-r);s++){
			printf(" ");
			
		}
		for(c=0;c<=r;c++){
			printf("* ");
				
		}
		printf("\n");
	}
}
