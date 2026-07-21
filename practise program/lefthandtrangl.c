//#include<stdio.h>
//int main()
//{
//	int r,c,s;
//	for(r=0;r<5;r++){
//		for(s=2;s<2*(5-r);s++){
//			printf(" ");
//	 }
//		
//		for(c=0;c<=r;c++){
//			
//			printf("1 ");
//			
//        }
//			printf("\n");
//	}
//}


#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i;
	for(i=4;i>=0;i--){
		printf("%d",a[i]);
	}
}
