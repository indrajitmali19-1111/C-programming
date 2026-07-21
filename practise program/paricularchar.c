//#include<stdio.h>
//int main()
//{
//	int c,r;
//	char ch='a';
//	
//	for(r=0;r<5;r++){
//		for(c=0;c<5;c++){
//			printf("%c",ch);
//		}
//		ch++;
//		printf("\n");
//	}
//	
//	
//}


//#include<stdio.h>
//int main()
//{
//	int c,r;
//	
//	for(r=0;r<5;r++){
//		for(c=0;c<5;c++){
//			printf("%d",r+1);
//		}
//		
//		printf("\n");
//	}
//	
//}


//#include<stdio.h>
//int main()
//{
//	int r,c;                          //*
//	for(r=0;r<5;r++){                 //**
//		for(c=0;c<=r;c++){            //***
//			printf("*");              //****
//		}                             //*****
//		printf("\n");
//	}
//}


#include<stdio.h>
int main()
{
	int r,c;                          //*
	for(r=5;r<0;r++){                 //**
		for(c=0;c>=r;c++){            //***
			printf("*");              //****
		}                             //*****
		printf("\n");
	}
}




