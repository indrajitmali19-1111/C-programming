#include<stdio.h>
int main(){
	int arr[3][3],i,r;
	
	printf("Enter The Matrix Element:");
	
	for(i=0;i<3;i++){
		for(r=0;r<3;r++){
			scanf("%d",&arr[i][r]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(r=0;r<3;r++){
			printf("%5d",arr[i][r]);
		}
		printf("\n");
	}
}
