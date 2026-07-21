#include<stdio.h>
int main(){
	
	char str[7]="FORTUNE";
	int i,ind=2;
	for( i=0;i<7;i++){
		if(i==ind)
		printf("%c",str[i]);
	}
}
