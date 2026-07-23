#include<stdio.h>
int main(){
	int arr[3][3][3]={{{1,2,3},{4,5,6},{7,8,9}},{{11,12,13},{14,15,16},{17,18,19}},{{21,22,23},{24,25,26},{27,28,29}}};
	int d,r,c;
	
	for(d=0;d<3;d++){
		printf("Depth\n");
		for(r=0;r<3;r++){
			for(c=0;c<3;c++){
			printf("%d ",arr[d][r][c]);	
			}
			printf("\n");
		}
		printf("\n");
	}
}
