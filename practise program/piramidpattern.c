
//piramidpatternstar

//#include<stdio.h>
//int main(){
//	int r,c,s;
//	char ch;
//	
//	for(r=0;r<5;r++){
//		for(s=0;s<2*(5-r);s++){
//			printf(" ");
//		}
//		for(c=0;c<2*r+1;c++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//lefthandtrangle

//#include<stdio.h>
//int main(){
//	int r,c,s;
//	char ch;
//	
//	for(r=0;r<5;r++){
//		for(s=0;s<2*(5-r);s++){
//			printf(" ");
//		}
//		for(c=0;c<=r;c++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}


//character piramid pattern

//#include<stdio.h>
//int main(){
//	int r,c,s;
//	char ch='a';
//	
//	for(r=0;r<5;r++){
//		for(s=0;s<2*(5-r);s++){
//			printf(" ");
//		}
//		for(c=0;c<2*r+1;c++){
//			printf("%c ",ch);
//			ch++;
//		}
//		printf("\n");
//	}
//}




#include<stdio.h>
int main(){
	int r,c,s;
	char ch='a';
	
	for(r=0;r<5;r++){
		for(s=0;s<1*(5-r);s++){
			printf(" ");
		}
		for(c=0;c<2*r+1;c++){
			printf("*");
		}
		printf("\n");
	}
}
