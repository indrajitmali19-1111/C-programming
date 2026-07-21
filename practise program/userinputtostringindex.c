#include<stdio.h>
int main(){
	char str[7]="fortune";
	char ch;
	printf("%s",str);
	printf("\nEnter Character:");
	scanf("%c",&ch);
	int i;
	for(i=0;i<7;i++){
		if(ch==str[i]){
			printf("%d",i);
		}
	}
}
