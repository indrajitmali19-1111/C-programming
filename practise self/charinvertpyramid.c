#include<stdio.h>
int main(){
	int r,c,s;
	char a='A';
	
	for(r=5;r>=1;r--){
		for(s=1;s<=5-r;s++){
			printf(" ");
			
		}
		for(c=1;c<=r*2-1;c++){
			printf("%c",a);
			
		}
		printf("\n");
	}
}
