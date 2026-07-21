#include<stdio.h>
int main(){
	char str[7]="fortune";
	char ch='r';
	int i;
	for(i=0;i<7;i++){
		if(ch==str[i]){
			printf("%d",i);
		}
	}
}
