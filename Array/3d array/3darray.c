//#include<stdio.h>
//int main()
//
//{
//	int marks[2][3][3]={{{1,1,1},{2,2,2},{3,3,3}},{{4,4,4},{5,5,5},{6,6,6}}};
//	
//	int t,r,c;
//	for(t=0;t<2;t++){
//		for(r=0;r<3;r++){
//			for(c=0;c<3;c++){
//				printf("%d",marks[t][r][c]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int arr[2][3][3]={{{11,12,13},{21,22,23},{31,32,33}},{{41,42,43},{51,52,53},{61,62,63}}};
//	int d,r,c;
//	for(d=0;d<2;d++){
//		for(r=0;r<3;r++){
//			for(c=0;c<3;c++){
//			
//			printf("%d",arr[d][r][c]);
//		}
//		printf("\n");
//
//		}
//		
//		printf("\n");
//	}
//	
//}

//#include<stdio.h>
//int main()
//{
//	char mr[3][3][3]={{{'a','b','c'},{'d','e','f'},{'g','h','i'}},{{'j','k','l'},
//	{'m','n','o'},{'p','q','r'}},{{'s','t','u'},{'v','w','x'},{'y','z','m'}}};
//	
//	int a,b,c;
//	for(a=0;a<3;a++){
//		for(b=0;b<3;b++){
//			for(c=0;c<3;c++){
//				printf("%c",mr[a][b][c]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int znj[2][3][2]={{11,22,33},{44,55,66},{77,88,99},{{12,24},{35,45},{46,56}}};
//	
//	printf("%d",znj[0][0][0]);
//}
//
//
//

#include<stdio.h>
int main()
{
	char arr[2][3][3]={{{'a','b','c'},{'d','e','f'},{'g','h','i'}},{{'j','k','l'},{'m','n','o'},{'p','q','r'}}};
	
	int i,m,s;
	for(i=0;i<2;i++){
		for(m=0;m<3;m++){
			for(s=0;s<3;s++){
				printf("%c",arr[i][m][s]);
			}
			printf("\n");
			
		}
		printf("\n");
	}
	
}


