#include<stdio.h>
int main()
{
	int arr[2][3][3]={{{1,2,3},{4,5,6},{7,8,9}},{{10,11,13},{14,15,16},{17,18,19}}};
	
	int  r,c,d;
	
	for(r=0;r<2;r++){
		for(c=0;c<3;c++){
			for(d=0;d<3;d++){
				
				printf("%d ",arr[r][c][d]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
}
