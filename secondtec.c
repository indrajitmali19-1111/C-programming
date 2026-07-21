#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter The row Input:");
	scanf("%d",&r);
	printf("Enter The Input:");
	scanf("%d",&c);
	
	for(int r=0;r<5;r++){
	
		for(int c=0;c<5;c++){
		
		printf("%d",c);	
		}
	printf("\n");
	printf("%d",r);

	}
	return 0;
	
}
