//#include<stdio.h>
//int main()
//{
//	int base,height;
//	float area;
//	printf("Enter Base:");
//	scanf("%d",&base);
//	printf("Enter Height:");
//	scanf("%d",&height);
//	area=0.5*base*height;
//	printf("%f Area of The Traingle:",area);
//}


//#include<stdio.h>
//int main()
//{
//	int a;
//	a=15<10;
//	printf("%d",a);
//}

//#include<stdio.h>
//int main(){
//	int a;
//	printf("Enter a number:");;
//	scanf("%d",&a);
//	
//	if(a>15){
//	
//	printf("hello");
//}
//
//	else
//	printf("bye");
//	
//}

#include<stdio.h>
int main()
{
	int r,c,s;
	
	for(r=0;r<5;r++){
		for(s=0;s<=2*(5-r);s++){
			printf(" ");
		}
			for(c=0;c<2*r+1;c++){
				printf("*");
			}
		
		printf("\n");
	}
}
