//#include<stdio.h>
//int main()
//{
//	int r,c;
//	for(r=0;r<5;r++){
//		for(c=0;c<5;c++){
//			if(r==0||r==2||r==4||(c==0 && r==1)||(c==4 && r==3)){
//				printf("*");
//			}
//			else{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int r,c;
	for(r=0;r<5;r++){
		for(c=0;c<5;c++){
			if(r==0||r==4||c==2){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
