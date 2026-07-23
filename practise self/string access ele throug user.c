#include<stdio.h>
int main()
{
	char str[7]="fortune";
	int in,i;
	printf("\n%s\n",str);
	printf("Enter Access of word num:");
	scanf("%d",&in);
	
	
	for(i=0;i<7;i++){
		if(in==i){
		printf("\n%c",str[i]);
			
		}
	}
}
