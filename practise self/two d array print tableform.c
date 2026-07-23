// 2d arrray matrix print

#include<stdio.h>
int  main()
{
	int arr[3][3]={{1,2,3},{2,3,4},{5,6,7}};
	
	int r,c;
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("%-5d ",arr[r][c]);
		}
		printf("\n\n");
	}
}
